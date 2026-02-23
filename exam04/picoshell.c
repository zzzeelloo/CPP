#include <stdio.h>
#include <sys/wait.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>


int picoshell(char **cmds[])
{
    int fd[2];
    int last_fd = -1;
    int i = 0;
    pid_t pid;

    while(cmds[i])
    {
        if(cmds[i + 1] && (pipe(fd) == -1))
            return (1);
        pid = fork();
        if (pid == -1)
        {
            if (cmds[i+1])
            {
                close(fd[0]);
                close(fd[1]);
            }
        }
        if(pid == 0)
        {
            if (last_fd != -1)
            {
                if (dup2(last_fd, 0) == -1)
                    return (1);
                close (last_fd);
            }
            if (cmds[i + 1])
            {
                close (fd[0]);
                if (dup2(fd[1], 1) == -1)
                    return (1);
                close (fd[0]);
            }
            execvp(cmds[i][0], cmds[i]);
            exit(1);
        }
        else
        {
            if (last_fd != -1)
            {
                close (last_fd);
            }
            if (cmds[i + 1])
            {
                close (fd[1]);
                last_fd = fd[0];
                
            }

        }

        i++;
    }
    while (wait(NULL) > 0)
    {
        ;
    }
    return (0);
}

int main(void)
{
    char *cmd1[] = {"ls", "-l", NULL};
    char *cmd2[] = {"grep", "pico", NULL};
    char *cmd3[] = {"wc", "-l", NULL};

    char **cmds[] = {
        cmd1,
        cmd2,
        cmd3,
        NULL
    };

    return picoshell(cmds);
}
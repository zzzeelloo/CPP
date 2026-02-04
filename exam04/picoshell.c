#include <unistd.h>
#include <stdlib.h>
#include <sys/wait.h>
#include <stdio.h>
#include <string.h>

int picoshell(char **cmds[])
{
    int fd[2];
    int last_fd = -1;
    int i = 0;
    pid_t pid;

    while (cmds[i] != NULL)
    {
        if (cmds[i + 1] && pipe(fd) == -1)
            return 1;

        pid = fork();
        if (pid == -1)
        {
            if (cmds[i + 1])
            {
                close(fd[0]);
                close(fd[1]);
            }
            return 1;
        }

        if (pid == 0)
        {
            if (last_fd != -1)
            {
                if (dup2(last_fd, STDIN_FILENO) == -1)
                    exit(1);
                close(last_fd);
            }
            if (cmds[i + 1])
            {
                close(fd[0]);
                if (dup2(fd[1], STDOUT_FILENO) == -1)
                    exit(1);
                close(fd[1]);
            }

            execvp(cmds[i][0], cmds[i]);
            exit(1);
        }
        if (last_fd != -1)
            close(last_fd);

        if (cmds[i + 1])
        {
            close(fd[1]);
            last_fd = fd[0];
        }
        i++;
    }
    while (wait(NULL) > 0)
        ;
    return 0;
}

// #include <stdio.h>

// // prototype
// int picoshell(char **cmds[]);

// int main(void)
// {
//     char *cmd1[] = {"ls", "-l", NULL};
//     char *cmd2[] = {"grep", ".c", NULL};
//     char *cmd3[] = {"wc", "-l", NULL};

//     char **cmds[] = {
//         cmd1,
//         cmd2,
//         cmd3,
//         NULL
//     };

//     if (picoshell(cmds) != 0)
//     {
//         perror("picoshell");
//         return 1;
//     }
//     return 0;
// }

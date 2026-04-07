NAME = form

CXX = c++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98
INCLUDES = -I ./includes

SRCS = srcs/main.cpp srcs/Bureaucrat.cpp srcs/AForm.cpp srcs/PresidentialPardonForm.cpp srcs/RobotomyRequestForm.cpp srcs/ShrubberyCreationForm.cpp
HEADERS = includes/Bureaucrat.hpp includes/AForm.hpp includes/PresidentialPardonForm.hpp includes/RobotomyRequestForm.hpp includes/ShrubberyCreationForm.hpp
OBJS = $(SRCS:.cpp=.o) 

all: $(NAME)

$(NAME): $(OBJS)
	$(CXX) $(CXXFLAGS) $(OBJS) -o $(NAME)
%.o: %.cpp $(HEADERS)
	$(CXX) $(CXXFLAGS) $(INCLUDES) -c $< -o $@

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
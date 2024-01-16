# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: yberrim <yberrim@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/01/15 13:06:27 by yberrim           #+#    #+#              #
#    Updated: 2024/01/16 20:27:03 by yberrim          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = c++
CCFLAGS = -std=c++98 -Wall -Wextra -Werror

NAME = main
SRCS =  Bureaucrat.cpp main.cpp AForm.cpp PresidentialPardonForm.cpp RobotomyRequestForm.cpp ShrubberyCreationForm.cpp Intern.cpp
OBJS = $(SRCS:.cpp=.o)
all: $(NAME)
$(NAME): $(OBJS)
	$(CC) $(CCFLAGS) $(OBJS) -o $(NAME)
%.o: %.cpp
	$(CC) $(CCFLAGS) -c $< -o $@
clean:
	rm -f $(TARGET) $(OBJS) *_shrubbery $(NAME)
fclean: clean
	rm -f $(NAME)
re: fclean all
.PHONY: all clean fclean re
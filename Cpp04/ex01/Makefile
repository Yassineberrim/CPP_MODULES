# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: yberrim <yberrim@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/12/28 16:25:50 by yberrim           #+#    #+#              #
#    Updated: 2023/12/30 17:11:23 by yberrim          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


GCC = c++
GCCFLAGS = -std=c++98 -Wall -Wextra -Werror

NAME = main
SRCS = Dog.cpp Cat.cpp Animal.cpp main.cpp WrongCat.cpp WrongAnimal.cpp Brain.cpp
OBJS = $(SRCS:.cpp=.o)
all: $(NAME)
$(NAME): $(OBJS) Dog.hpp Cat.hpp Animal.hpp
	$(GCC) $(GCCFLAGS) -o $(NAME) $(OBJS)
%.o: %.cpp
	$(GCC) $(GCCFLAGS) -c $< -o $@
clean:
	rm -f $(TARGET) $(OBJS) $(NAME)
fclean: clean
	rm -f $(NAME)
re: fclean all
.PHONY: all clean fclean re
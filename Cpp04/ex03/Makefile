# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: yberrim <yberrim@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/01/01 22:39:48 by yberrim           #+#    #+#              #
#    Updated: 2024/01/06 18:49:12 by yberrim          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

GCC = c++
GCCFLAGS = -std=c++98 -Wall -Wextra -Werror 

NAME = main
SRCS = main.cpp Ice.cpp Cure.cpp Character.cpp AMateria.cpp  MateriaSource.cpp 
OBJS = $(SRCS:.cpp=.o)
all: $(NAME)
$(NAME): $(OBJS) 
	$(GCC) $(GCCFLAGS) -o $(NAME) $(OBJS)
%.o: %.cpp
	$(GCC) $(GCCFLAGS) -c $< -o $@
clean:
	rm -f $(TARGET) $(OBJS) $(NAME)
fclean: clean
	rm -f $(NAME)
re: fclean all
.PHONY: all clean fclean re
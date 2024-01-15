# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: yberrim <yberrim@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/01/15 13:06:27 by yberrim           #+#    #+#              #
#    Updated: 2024/01/15 15:42:24 by yberrim          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

GCC = c++
GCCFLAGS = -std=c++98 -Wall -Wextra -Werror

NAME = main
SRCS =  Bureaucrat.cpp main.cpp Form.cpp 
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
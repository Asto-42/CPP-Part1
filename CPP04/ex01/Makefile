# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jquil <jquil@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/01/30 16:12:36 by jquil             #+#    #+#              #
#    Updated: 2024/01/31 14:38:57 by jquil            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC		=	src/main.cpp		\
			src/Animal.cpp		\
			src/Dog.cpp			\
			src/Cat.cpp			\
			src/Brain.cpp		\

NAME		=	Brain
OBJS		=	$(SRC:.cpp=.o)
CC			=	g++
FLAGS		=	-Werror -Wextra -Wall

#------------------------------------------------------------------

all: $(NAME)

$(NAME): $(OBJS)
	@$(CC) $(OBJS) -o $(NAME)

%.o: %.cpp
	@$(CC) $(FLAGS) -c $< -o $@

clean:
	@$(RM) $(OBJS) $(DEPS)

fclean: clean
	make -C fclean
	@$(RM) $(NAME) $(OBJS) $(DEPS)

re:
	@$(MAKE) fclean
	@$(MAKE) all

#------------------------------------------------------------------

.PHONY: clean fclean re

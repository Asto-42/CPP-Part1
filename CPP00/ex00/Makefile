# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jquil <jquil@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/01/10 11:58:31 by jquil             #+#    #+#              #
#    Updated: 2024/01/10 12:53:11 by jquil            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC		=	megaphone.cpp		\

NAME		=	megaphone
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
	@rm -rf $(NAME)

re:
	@$(MAKE) fclean
	@$(MAKE) all

#------------------------------------------------------------------

.PHONY: clean fclean re

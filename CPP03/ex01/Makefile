# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jquil <jquil@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/01/30 16:12:36 by jquil             #+#    #+#              #
#    Updated: 2024/01/30 16:45:22 by jquil            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC		=	main.cpp		\
			ClapTrap.cpp	\
			ScavTrap.cpp	\

NAME		=	ScavTrap
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

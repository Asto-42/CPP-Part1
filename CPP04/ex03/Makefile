# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jquil <jquil@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/01/30 16:12:36 by jquil             #+#    #+#              #
#    Updated: 2024/03/01 14:19:22 by jquil            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC		=	src/main.cpp			\
			src/AMateria.cpp		\
			src/Character.cpp		\
			src/Cure.cpp			\
			src/Ice.cpp				\
			src/MateriaSource.cpp	\

NAME		=	1v1
OBJS		=	$(SRC:.cpp=.o)

COMPILE		=	c++

FLAGS		=	-Wall -Wextra -Werror -std=c++98 -MMD

DEPS = $(OBJS:.o=.d)

EXE_NAME	=	-o $(NAME)

EXEC		=	$(NAME)

# ------------------------------------- RULES ---------------------------------
all: $(NAME)

$(NAME): $(OBJS)
	$(COMPILE) $(FLAGS) $(OBJS) $(EXE_NAME)

run: $(NAME)
	./$(NAME)

clean:
	rm -rf $(OBJS)

fclean: clean
	rm -rf $(EXEC)

re:	fclean all

.cpp.o:
	${COMPILE} ${FLAGS} -c $< -o ${<:.cpp=.o}

.PHONY:	all clean fclean re run

-include $(DEPS)

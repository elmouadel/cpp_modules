# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: eabdelha <eabdelha@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/06/23 10:21:40 by eabdelha          #+#    #+#              #
#    Updated: 2022/08/07 11:03:18 by eabdelha         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

.PHONY : all bonus clean fclean re 

CC = clang++
STDCPP = -std=c++98 
CFLAGS = -Wall -Wextra -Werror -Iinclude

NAME = form

INCLUDES =	AMateria.h		\
			Ice.h			\
			Cure.h			\
			ICharater.h		\
			Character.h		\
			IMateriaSourc.h	\
			MateriaSource.h
			


SRC	=	main.cpp			\
		Bureaucrat.cpp		\
		Form.cpp			\

		
OBJECTS = $(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJECTS) 
	@$(CC) $(CFLAGS) $(STDCPP) $(OBJECTS) -o $(NAME)

%.o: %.cpp 
	$(CC) $(CFLAGS) $(STDCPP) -o $@ -c $<
	
clean:
	@rm -f $(OBJECTS)

fclean: clean 
	@rm -f $(NAME)

re: fclean all


# OBJS		=	$(SRC:.cpp=.o)

# COMPILE		=	clang++

# # -std=c++98 displays an error if an unauthorized function is left in the code
# FLAGS		=	-Wall -Wextra -Werror -std=c++98

# EXE_NAME	=	-o $(NAME)

# EXEC		=	$(NAME)

# # ------------------------------------- RULES ---------------------------------
# all: $(NAME)

# $(NAME): $(OBJS)
# 	$(COMPILE) $(FLAGS) $(OBJS) $(EXE_NAME)

# run: $(NAME)
# 	./$(NAME)

# clean:
# 	rm -rf $(OBJS)

# fclean: clean
# 	rm -rf $(EXEC)
	
# re:	fclean all

# .cpp.o:
# 	${COMPILE} ${FLAGS} -c $< -o ${<:.cpp=.o}

# .PHONY:	all clean fclean re run
# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: eabdelha <eabdelha@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/06/23 10:21:40 by eabdelha          #+#    #+#              #
#    Updated: 2022/08/02 20:29:44 by eabdelha         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

.PHONY : all bonus clean fclean re 

CC = c++
STDCPP = -std=c++98
CFLAGS = -Wall -Wextra -Werror

NAME = brain

INCLUDES =	Animal.h	\
			Cat.h		\
			Dog.h		\
			brain.h


SRC	=	main.cpp		\
		Animal.cpp		\
		Cat.cpp			\
		Dog.cpp			\
		Brain.cpp

		
OBJECTS = $(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJECTS) 
	@$(CC) $(STDCPP) $(CFLAGS) $(OBJECTS) -o $(NAME)

%.o: %.cpp $(INCLUDES)
	$(CC) $(STDCPP) $(CFLAGS) -o $@ -c $<
	
clean:
	@rm -f $(OBJECTS)

fclean: clean 
	@rm -f $(NAME)

re: fclean all

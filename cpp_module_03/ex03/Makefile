# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: eabdelha <eabdelha@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/06/23 10:21:40 by eabdelha          #+#    #+#              #
#    Updated: 2022/08/07 21:08:35 by eabdelha         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

.PHONY : all bonus clean fclean re 

CC = c++
STDCPP = -std=c++98
CFLAGS = -Wall -Wextra -Werror 

NAME = diamondtrap

INCLUDE =	ClapTrap.h	\
			ScavTrap.h	\
			FragTrap.h	\
			DiamondTrap.h

SRC	=	main.cpp		\
		ClapTrap.cpp	\
		ScavTrap.cpp	\
		FragTrap.cpp	\
		DiamondTrap.cpp

		
OBJECTS = $(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJECTS) 
	@$(CC) $(STDCPP) $(CFLAGS) $(OBJECTS) -o $(NAME)

%.o: %.cpp $(INCLUDE)
	$(CC) $(STDCPP) $(CFLAGS) -o $@ -c $<
	
clean:
	@rm -f $(OBJECTS)

fclean: clean 
	@rm -f $(NAME)

re: fclean all

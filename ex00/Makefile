# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: faksouss <faksouss@student.1337.ma>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/15 02:45:35 by faksouss          #+#    #+#              #
#    Updated: 2023/11/15 02:57:36 by faksouss         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC = main.cpp

OBJ = $(SRC:.cpp=.o)

HDR = easyfind.hpp

FLGS = -Wall -Wextra -Werror -std=c++98

NAME = easyfind

all : $(NAME)

$(NAME) : $(OBJ)
	c++ $(FLGS) $< -o $@

%.o : %.cpp $(HDR)
	c++ $(FLGS) -c $< -o $@

clean :
	rm -rf $(OBJ)

fclean : clean
	rm -rf $(NAME)

re : fclean all

.PHONY : all re clean fclean

.SILENT : all re fclean clean $(NAME) $(OBJ)

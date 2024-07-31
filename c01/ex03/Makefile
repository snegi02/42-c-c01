# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: snegi <snegi@student.42berlin.de>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/05/08 14:17:16 by snegi             #+#    #+#              #
#    Updated: 2024/05/08 14:22:57 by snegi            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC	=	c++
CFLAGS	=	-Wall -Wextra -Werror -std=c++98

SRCS	=	main.cpp Weapon.cpp HumanA.cpp HumanB.cpp

OBJS	=	$(SRCS:.cpp=.o)

NAME	=	violence

all:		$(NAME)

$(NAME):		$(OBJS)
				$(CC) $(CFLAGS) -o $(NAME) $(OBJS)

%.o: %.cpp
	$(CC) $(CFLAGS) -c -o $@ $<

clean:
	rm -f $(OBJS)

fclean:		clean
			rm -f $(NAME)

re:	fclean all

.PHONY:	all clean fclean re


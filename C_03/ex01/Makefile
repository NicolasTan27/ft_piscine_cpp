# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ntan <ntan@student.42.fr>                  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/06/06 15:29:50 by ntan              #+#    #+#              #
#    Updated: 2022/08/03 17:56:26 by ntan             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS			=	main.cpp \
					ClapTrap.cpp \
					ScavTrap.cpp

OBJS			= 	$(SRCS:.cpp=.o)

CC				= 	c++
RM				= 	rm -f
CFLAGS			= 	-Wall -Wextra -Werror -g -std=c++98
NAME			= 	 Serena_mon_amour

all:			$(NAME)

%.o: %.cpp
				$(CC) $(CFLAGS) -I. -c $< -o $@

$(NAME):		$(OBJS)
				$(CC) $(CFLAGS) -I. $(SRCS) -o $(NAME)

clean:
				$(RM) $(OBJS)

fclean:			
				$(RM) $(OBJS)
				$(RM) $(NAME)

re:				fclean all


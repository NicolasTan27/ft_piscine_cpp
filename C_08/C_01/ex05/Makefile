# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ntan <ntan@student.42.fr>                  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/06/06 15:29:50 by ntan              #+#    #+#              #
#    Updated: 2022/06/20 17:51:05 by ntan             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS			=	main.cpp\
					Harl.cpp

OBJS			= 	$(SRCS:.cpp=.o)

CC				= 	c++
RM				= 	rm -f
CFLAGS			= 	-Wall -Wextra -Werror -g -std=c++98
NAME			= 	Harl

all:			$(NAME)

$(NAME):		$(OBJS)
				$(CC) $(CFLAGS) -I. $(SRCS) -o $(NAME)

clean:
				$(RM) $(OBJS)

fclean:			
				$(RM) $(OBJS)
				$(RM) $(NAME)

re:				fclean all


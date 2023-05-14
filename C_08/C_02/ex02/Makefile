# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ntan <ntan@student.42.fr>                  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/06/06 15:29:50 by ntan              #+#    #+#              #
#    Updated: 2022/07/11 13:14:30 by ntan             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS			=	main.cpp \
					Fixed.cpp

OBJS			= 	$(SRCS:.cpp=.o)

CC				= 	c++
RM				= 	rm -f
CFLAGS			= 	-Wall -Wextra -Werror -g -std=c++98
NAME			= 	Maintenant_on_peut_parler

all:			$(NAME)

$(NAME):		$(OBJS)
				$(CC) $(CFLAGS) -I. $(SRCS) -o $(NAME)

clean:
				$(RM) $(OBJS)

fclean:			
				$(RM) $(OBJS)
				$(RM) $(NAME)

re:				fclean all


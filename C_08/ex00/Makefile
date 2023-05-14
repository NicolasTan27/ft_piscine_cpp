# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ntan <ntan@student.42.fr>                  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/08/24 18:27:04 by ntan              #+#    #+#              #
#    Updated: 2022/08/25 16:44:19 by ntan             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS			=	main.cpp

OBJS			= 	$(SRCS:.cpp=.o)
					
CC				=	c++
RM				=	rm -f
CFLAGS			=	-Wall -Wextra -Werror -g -std=c++98
NAME			=	ex00

all:			$(NAME)

%.o:%.tpp
				$(CC) $(CFLAGS) -I. -c $< -o $@ -E

%.o:%.cpp
				$(CC) $(CFLAGS) -I. -c $< -o $@ -E

$(NAME):		$(OBJS)
				$(CC) $(CFLAGS) -I. $(SRCS) -o $(NAME)

clean:
				$(RM) $(OBJS)

fclean:
				$(RM) $(OBJS)
				$(RM) $(NAME)

re:				fclean all
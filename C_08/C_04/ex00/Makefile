# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ntan <ntan@student.42.fr>                  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/06/06 15:29:50 by ntan              #+#    #+#              #
#    Updated: 2022/08/03 17:56:41 by ntan             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS			=	main.cpp \
					Animal.cpp \
					Dog.cpp \
					Cat.cpp \
					WrongAnimal.cpp \
					WrongCat.cpp

OBJS			= 	$(SRCS:.cpp=.o)

CC				= 	c++
RM				= 	rm -f
CFLAGS			= 	-Wall -Wextra -Werror -g -std=c++98
NAME			= 	Polymorphisme

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


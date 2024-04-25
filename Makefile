# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: esafouan <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/01 04:21:30 by esafouan          #+#    #+#              #
#    Updated: 2022/11/01 04:22:01 by esafouan         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

CFLAGS =  -Wall -Wextra -Werror

SRC = ft_printf.c ft_printf_utils.c ft_printf_utils_2.c

OBJ = $(SRC:.c=.o)

RM = rm -f

all: $(NAME)

$(NAME) : $(OBJ)
	ar -rc $(NAME) $(OBJ)
clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all

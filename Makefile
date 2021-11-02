# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bducrocq <bducrocq@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/08/21 12:11:20 by macoet            #+#    #+#              #
#    Updated: 2021/11/02 12:27:53 by bducrocq         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft

SRC =	main.c \
		dict_manager.c \
		ft_putchar.c \
		ft_putstr.c \
		ft_split.c \
		ft_strcat.c \
		ft_strcmp.c \
		ft_strlen.c \
		ft_strndup.c \
		ten_multiple.c \
		put_words.c

OBJ =	*.o

FLAG = -Wall -Wextra -Werror

$(NAME) :
	@cc $(FLAG) $(SRC) -o $(NAME)
clean :
	@rm -f $(OBJ)

fclean : clean
	@/bin/rm -f $(NAME)

re : fclean

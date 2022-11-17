# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ldang <ldang@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/08 15:23:11 by ldang             #+#    #+#              #
#    Updated: 2022/11/11 15:04:54 by ldang            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
SRC = ft_*.c
HEADER = libft.c
OFILE = ft_*.o
FLAG = -Wall -Wextra -Werror

all: $(NAME)

$(NAME):
	gcc -c $(FLAG) $(SRC) -I $(HEADER)
	ar rc $(NAME) $(OFILE)
	ranlib $(NAME)

clean:
	/bin/rm -f $(OFILE)

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all
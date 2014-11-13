# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: alaulom <anthonylaulom@gmail.com>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2014/11/13 16:58:03 by alaulom           #+#    #+#              #
#    Updated: 2014/11/13 18:44:40 by alaulom          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRC = ft_memset.c ft_bzero.c ft_memcpy.c ft_memccpy.c ft_memmove.c \
	ft_memcmp.c ft_strlen.c ft_strcpy.c ft_strncpy.c ft_strcmp.c ft_strncmp.c \
	ft_atoi.c ft_strcat.c ft_strdup.c ft_strchr ft_strcchr.c ft_strncat.c \
	ft_strlcat.c ft_strstr.c ft_strnstr.c ft_isalpha.c ft_isdigit.c \
	ft_isalnum.c ft_isascii.c ft_isprint.c ft_islower.c ft_toupper.c \
	ft_isupper.c ft_tolower.c ft_memalloc.c ft_memdel.c ft_strnew.c \
	ft_strdel.c ft_strclr.c ft_striter.c ft_striteri.c ft_strmap.c \
	ft_strmapi.c ft_strequ.c ft_strenqu.c ft_strsub.c ft_strjoin.c \
	ft_strtrim.c ft_putchar.c ft_putstr.c ft_putendl.c ft_putnbr.c \
	ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c ft_memchr.c

OBJ   = $(SRC:.c=.o)
CC    = gcc
FLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME): $(OBJ)
		ar rc $(NAME) $(OBJ)
		ranlib $(NAME)

%.o: %.c
		$(CC) -I . -o $? -c $? $(FLAGS)

.PHONY: clean fclean re test1 dltest1 test2 dltest2 testall

clean:
		rm -f $(OBJ)

fclean: clean
		rm -f $(NAME)

testall: test1 test2

test1: $(NAME) main1.c
		gcc -I . main1.c libft.a
		rm main1.c
		./a.out

test2: $(NAME) main2.c
		gcc -I . main2.c libft.a
		rm main2.c
		./a.out

main1.c:
		curl -s http://pastebin.com/raw.php?i=p3BBP70K > main1.c

main2.c:
		curl -s http://pastebin.com/raw.php\?i\=KQRs4L2H > main2.c

re: fclean all

# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: elpastor <elpastor@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/25 14:52:12 by elpastor          #+#    #+#              #
#    Updated: 2021/11/25 15:04:35 by elpastor         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRCS = ft_atoi.c \
ft_isprint.c \
ft_putchar_fd.c \
ft_striteri.c \
ft_strnstr.c \
ft_bzero.c \
ft_itoa.c \
ft_putendl_fd.c \
ft_strjoin.c \
ft_strrchr.c \
ft_calloc.c \
ft_memchr.c \
ft_putnbr_fd.c \
ft_strlcat.c \
ft_strtrim.c \
ft_isalnum.c \
ft_memcmp.c \
ft_putstr_fd.c \
ft_strlcpy.c \
ft_substr.c \
ft_isalpha.c \
ft_memcpy.c \
ft_split.c \
ft_strlen.c \
ft_tolower.c \
ft_isascii.c \
ft_memmove.c \
ft_strchr.c \
ft_strmapi.c \
ft_toupper.c \
ft_isdigit.c \
ft_memset.c \
ft_strdup.c \
ft_strncmp.c

OBJS = ${SRCS:.c=.o}

FLAGS = -Wall -Wextra -Werror

all:	${NAME}

${NAME}: ${OBJS}
		ar rc ${NAME} ${OBJS}

clean:
		rm -f ${OBJS}

fclean:	clean
		rm -f ${NAME}

re:		fclean all
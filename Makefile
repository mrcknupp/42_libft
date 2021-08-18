# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mrodrigo <mrodrigo@student.42sp.org.br>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/08/14 23:28:00 by mrodrigo          #+#    #+#              #
#    Updated: 2021/08/17 23:47:51 by mrodrigo         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

#SRC = $(shell find . -name "*.c")
#SRC = $(shell find . -name "*.c" ! -name "*_bonus.c")

SRC = ft_atoi.c \
		ft_bzero.c \
		ft_calloc.c \
		ft_isalnum.c \
		ft_isalpha.c \
		ft_isascii.c \
		ft_isdigit.c \
		ft_isprint.c \
		ft_itoa.c \
		ft_memchr.c \
		ft_memcmp.c \
		ft_memcpy.c \
		ft_memmove.c \
		ft_memset.c \
		ft_putchar_fd.c \
		ft_putendl_fd.c \
		ft_putnbr_fd.c \
		ft_putstr_fd.c \
		ft_split.c \
		ft_strchr.c \
		ft_strdup.c \
		ft_striteri.c \
		ft_strjoin.c \
		ft_strlcat.c \
		ft_strlcpy.c \
		ft_strlen.c \
		ft_strmapi.c \
		ft_strncmp.c \
		ft_strnstr.c \
		ft_strrchr.c \
		ft_strtrim.c \
		ft_substr.c \
		ft_tolower.c \
		ft_toupper.c

OBJ = ${SRC:.c=.o}

#SRC_BONUS = $(shell find . -name "*_bonus.c")
SRC_BONUS = ft_lstadd_back.c \
		ft_lstadd_front.c \
		ft_lstclear.c \
		ft_lstdelone.c \
		ft_lstiter.c \
		ft_lstlast.c \
		ft_lstmap.c \
		ft_lstnew.c \
		ft_lstsize.c

OBJ_BONUS = ${SRC_BONUS:.c=.o}

CFLAGS = -Wall -Werror -Wextra

CC = clang

COMPILE = $(CC) $(CFLAGS) -c

LIB = ar rcs $(NAME)

RANLIB = ranlib $(NAME)

REMOVE = rm -f

NORMS = norminette 

all: $(NAME)

$(NAME):
	@$(COMPILE) $(SRC)
	@$(LIB) $(OBJ)
	@$(RANLIB)

bonus:
	@$(COMPILE) $(SRC_BONUS)
	@$(LIB) $(OBJ_BONUS)
	@$(RANLIB)

norms:
		$(NORMS) $(SRC)
		$(NORMS) $(SRC_BONUS)
clean:
	@$(REMOVE) $(OBJ)
	@$(REMOVE) $(OBJ_BONUS)

fclean: clean
	@$(REMOVE) $(NAME)

re: fclean all

.PHONY: all clean bonus fclean re
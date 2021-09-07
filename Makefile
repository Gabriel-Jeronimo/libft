# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gjeronim <gjeronim@student.42sp.org.br>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/08/23 23:19:15 by gjeronim          #+#    #+#              #
#    Updated: 2021/09/07 15:56:51 by gjeronim         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= libft.a
CFLAGS		= -Wall -Werror -Wextra -I. -c
FILES		= 	ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c \
				ft_isprint.c  ft_strlen.c ft_memset.c ft_bzero.c \
				ft_memcpy.c ft_memmove.c ft_strlcpy.c ft_strlcat.c \
				ft_toupper.c ft_tolower.c ft_strchr.c ft_strrchr.c \
				ft_strncmp.c ft_memchr.c ft_memcmp.c ft_strnstr.c \
				ft_atoi.c ft_calloc.c ft_strdup.c ft_substr.c ft_strjoin.c \
				ft_strtrim.c ft_itoa.c ft_strmapi.c ft_striteri.c \
				ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_split.c \
				ft_putnbr_fd.c
BONUS		=	ft_lstnew.c ft_lstdelone.c ft_lstclear.c ft_lstadd_front.c \
				ft_lstadd_back.c ft_lstsize.c ft_lstiter.c ft_lstmap ft_lstlast.c

OBJ			= $(FILES:%.c=%.o)

OBJ_BONUS = $(BONUS:%.c=%.o)

all: $(NAME)

$(NAME): $(OBJ)
	ar rcs $(NAME) $(OBJ)

$(OBJ): $(FILES)
	clang $(CFLAGS) $(FILES)

bonus: $(NAME) $(OBJ_BONUS)
	$(AR) $(ARFLAGS) $(NAME) $(OBJ_BONUS)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME) $(OBJ_BONUS)

re: fclean all

.PHONY: clean fclean all re bonus

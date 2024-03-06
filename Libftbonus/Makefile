# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pferrer- <pferrer-@student.42barcel>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/01/18 15:52:06 by pferrer-          #+#    #+#              #
#    Updated: 2024/02/12 12:09:01 by pferrer-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#------------------------------------VARIABLES---------------------------------#

CC = gcc

CFLAGS = -Wall -Werror -Wextra

AR = ar -rcs

C_FILES	=	ft_atoi.c ft_bzero.c ft_calloc.c ft_isalnum.c ft_isalpha.c\
			ft_isascii.c ft_isdigit.c ft_isprint.c ft_itoa.c ft_memchr.c\
		   	ft_memcmp.c ft_memcpy.c ft_memmove.c ft_memset.c ft_putchar_fd.c\
			ft_putendl_fd.c ft_putnbr_fd.c ft_putstr_fd.c ft_split.c ft_strchr.c\
		   	ft_strdup.c ft_striteri.c ft_strjoin.c ft_strlcat.c ft_strlcpy.c\
		   	ft_strlen.c ft_strmapi.c ft_strncmp.c ft_strnstr.c ft_strrchr.c\
		   	ft_strtrim.c ft_substr.c ft_tolower.c ft_toupper.c

O_FILES = $(C_FILES:.c=.o)

NAME = libft.a

#-------------------------------------TARGETS----------------------------------#

all: $(NAME)

$(NAME): $(O_FILES)
	$(AR) $(NAME) $(O_FILES)
	#$(CC) $(CFLAGS) $(O_FILES)

%.o: %.c libft.h Makefile
	@$(CC) $(CFLAGS) -c $< -o $@
	@echo "$@ compilado"

clean:
	@rm -f $(O_FILES)
	@echo "$(O_FILES) deleted"

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re

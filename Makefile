# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: abait-el <abait-el@student.1337.ma>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/10/14 22:24:28 by abait-el          #+#    #+#              #
#    Updated: 2025/10/14 22:24:28 by abait-el         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

##
# libft
#
# @Makefile
# @version 0.1

# ---------------------------------------------------------------------------- #
#                              Build Configuration                             #
# ---------------------------------------------------------------------------- #

NAME		=	libft.a

CC			=	cc
CFLAGS		=	-Wall -Wextra -Werror
AR			=	ar rcs
RM			=	rm -f

# ---------------------------------------------------------------------------- #
#                                   Colors                                     #
# ---------------------------------------------------------------------------- #

RED			=	\e[3;31m
GREEN		=	\e[3;32m
YELLOW		=	\e[3;33m
CYAN		=	\e[3;96m
END			=	\e[0m

SHELL := /bin/bash

# ---------------------------------------------------------------------------- #
#                                  Messages                                    #
# ---------------------------------------------------------------------------- #

OK			=	$(GREEN)[OK]$(END)
KO			=	$(RED)[KO]$(END)
INFO		=	$(CYAN)[INFO]$(END)
WARN		=	$(YELLOW)[WARN]$(END)

# ---------------------------------------------------------------------------- #
#                                 Sources                                      #
# ---------------------------------------------------------------------------- #

# Mandatory
SRC			=	ft_atoi.c       ft_bzero.c     ft_calloc.c    ft_isalnum.c ft_isalpha.c    \
				ft_isascii.c    ft_isdigit.c   ft_isprint.c   ft_itoa.c    ft_memchr.c     \
				ft_memcmp.c     ft_memcpy.c    ft_memmove.c   ft_memset.c  ft_putchar_fd.c \
				ft_putendl_fd.c ft_putnbr_fd.c ft_putstr_fd.c ft_split.c   ft_strchr.c     \
				ft_strdup.c     ft_striteri.c  ft_strjoin.c   ft_strlcat.c ft_strlcpy.c    \
				ft_strlen.c     ft_strmapi.c   ft_strncmp.c   ft_strnstr.c ft_strrchr.c    \
				ft_strtrim.c    ft_substr.c    ft_tolower.c   ft_toupper.c
OBJ			=	$(patsubst %.c, %.o, $(SRC))

# Bonus
B_SRC		=	ft_lstadd_back_bonus.c ft_lstadd_front_bonus.c ft_lstclear_bonus.c \
				ft_lstdelone_bonus.c   ft_lstiter_bonus.c      ft_lstlast_bonus.c  \
				ft_lstmap_bonus.c      ft_lstnew_bonus.c       ft_lstsize_bonus.c
B_OBJ		=	$(patsubst %.c, %.o, $(B_SRC))

# ---------------------------------------------------------------------------- #
#                                   Rules                                      #
# ---------------------------------------------------------------------------- #

all:		$(NAME)
	@echo -e "$(GREEN) libft.a has been successfuly built$(END)"

$(NAME):	$(OBJ)
	@echo -e "$(CYAN) Object files has been built, Now creating libft.a...$(END)"
	$(AR) $(NAME) $(OBJ)
	@echo -e "$(INFO) Mandatory part is done!"

bonus:		$(B_OBJ)
	@$(AR) $(NAME) $(B_OBJ)
	@echo -e "$(OK) Bonus part is done!"

%.o: %.c
	$(CC) $(CFLAGS) -o $@ -c $<

clean:
	@$(RM) $(OBJ) $(B_OBJ) $(C_OBJ)
	@echo -e "$(WARN) Object files has been deleted."

fclean:		clean
	@$(RM) $(NAME)
	@echo -e "$(WARN) $(NAME) has been deleted."

re: fclean all

.PHONY:		all clean fclean re bonus

# end

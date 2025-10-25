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
# @version 4.4.1

# ---------------------------------------------------------------------------- #
#                              Build Configuration                             #
# ---------------------------------------------------------------------------- #

NAME		=	libft.a

CC			=	cc
CFLAGS		=	-Wall -Wextra -Werror
AR			=	ar rcs
RM			=	rm -f

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
OBJ = $(SRC:.c=.o)

# Bonus
B_SRC		=	ft_lstadd_back_bonus.c ft_lstadd_front_bonus.c ft_lstclear_bonus.c \
				ft_lstdelone_bonus.c   ft_lstiter_bonus.c      ft_lstlast_bonus.c  \
				ft_lstmap_bonus.c      ft_lstnew_bonus.c       ft_lstsize_bonus.c
B_OBJ = $(B_SRC:.c=.o)

# ---------------------------------------------------------------------------- #
#                                   Rules                                      #
# ---------------------------------------------------------------------------- #

all:		$(NAME)
	@echo "libft.a has been successfuly built"

$(NAME):	$(OBJ)
	@echo "Object files has been built, Now creating libft.a..."
	$(AR) $(NAME) $(OBJ)
	@echo "Mandatory part is done!"

bonus:		.bonus_remove_relinking_trick
	@echo "Bonus part is done!"

.bonus_remove_relinking_trick: $(B_OBJ)
	$(AR) $(NAME) $(B_OBJ)
	@touch .bonus_remove_relinking_trick

%.o: %.c
	$(CC) $(CFLAGS)    -c $< -o $@

clean:
	$(RM) $(OBJ) $(B_OBJ)
	@echo "Object files has been deleted."

fclean:		clean
	$(RM) $(NAME)
	@$(RM) .bonus_remove_relinking_trick
	@echo "$(NAME) has been deleted."

re: fclean all

.PHONY:		all clean fclean re bonus
.SECONDARY: $(OBJ) $(B_OBJ)

# end

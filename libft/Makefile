# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tissad <tissad@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/15 12:06:21 by tissad            #+#    #+#              #
#    Updated: 2024/12/07 12:12:27 by tissad           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#Compilation options
CC=gcc
CFLAGS=-Wall -Wextra -Werror
AR=ar
ARFLAGS=-rcs

#Shell Commands
RMF=rm -f
RMRF=rm -rf

#Mondatory sources files
SOURCES	=	ft_atoi.c\
			ft_bzero.c\
			ft_calloc.c\
			ft_isalnum.c\
			ft_isalpha.c\
			ft_isascii.c\
			ft_isdigit.c\
			ft_isprint.c\
			ft_itoa.c\
			ft_memchr.c\
			ft_memcmp.c\
			ft_memcpy.c\
			ft_memmove.c\
			ft_memset.c\
			ft_putchar_fd.c\
			ft_putendl_fd.c\
			ft_putnbr_fd.c\
			ft_putstr_fd.c\
			ft_split.c\
			ft_strchr.c\
			ft_strdup.c\
			ft_striteri.c\
			ft_strjoin.c\
			ft_strlcat.c\
			ft_strlcpy.c\
			ft_strlen.c\
			ft_strmapi.c\
			ft_strncmp.c\
			ft_strnstr.c\
			ft_strrchr.c\
			ft_strtrim.c\
			ft_substr.c\
			ft_tolower.c\
			ft_toupper.c
#Bonus sources files
S_BONUS = 	ft_lstnew.c\
			ft_lstadd_front.c\
			ft_lstsize.c\
			ft_lstlast.c\
			ft_lstadd_back.c\
			ft_lstdelone.c\
			ft_lstclear.c\
			ft_lstiter.c\
			ft_lstmap.c

#Objects files
OBJECTS=$(SOURCES:.c=.o)
O_BONUS=$(S_BONUS:.c=.o)

#Includes
INCLUDES=-I

#Executable name
EXEC=libft.a

#Compilation of libft
all: $(EXEC)

$(EXEC): $(OBJECTS)
	$(AR) $(ARFLAGS) $@ $^

#Compilation of objects files
%.o:%.c
	$(CC) $(CFLAGS) -c $< -o $@

#Compilation of bonus files
bonus: $(EXEC) $(O_BONUS)
	$(AR) $(ARFLAGS) $^
%.o:%.c
	$(CC) $(CFLAGS) -c $< -o $@

#clean rule removes the .o files
clean:
	$(RMF) *.o
	
#fclean rule removes the .o files and the executable
fclean: clean
	$(RMF) $(EXEC)
	
#Recompiles the project
re: fclean all

#Phony rules
.PHONY: all clean fclean re bonus
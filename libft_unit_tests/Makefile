# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tissad <tissad@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/12/13 16:58:57 by tissad            #+#    #+#              #
#    Updated: 2024/12/13 17:32:38 by tissad           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#Compilation options
CC=gcc
CFLAGS=-Wall -Wextra -Werror
ARFLAGS=-rcs

#Shell Commands
RMF=rm -f
RMRF=rm -rf

#Colors
GREEN		:= \033[0;32m
NC			:= \033[0m

LIBFTDIR	:= ../libft
LIBFT		:= $(LIBFTDIR)/libft.a
HDRS		:= $(LIBFTDIR)

#Mondatory sources files
SRCS	=	ft_atoi_tests.c\
			ft_bzero_tests.c\
			ft_calloc_tests.c\
			ft_isc_tests.c\
			ft_itoa_tests.c\
			ft_lstadd_back_tests.c\
			ft_lstadd_front_tests.c\
			ft_lstclear_tests.c\
			ft_lstdelone_tests.c\
			ft_lstiter_tests.c\
			ft_lstlast_tests.c\
			ft_lstmap_tests.c\
			ft_lstnew_tests.c\
			ft_lstsize_tests.c\
			ft_strtrim_tests.c\
			utils_lstfunctions.c\
			utils_printfunctions.c\
			main.c\

OBJS		:= $(SRCS:.c=.o)
HEADERS		:= -I $(HDRS)
LIBS		:= $(LIBFT)

NAME		:= libft_unit_tests

all: libft $(NAME)

%.o: %.c
	@$(CC) $(CFLAGS) -c $< -o $@ $(HEADERS)

$(NAME): $(OBJS) $(HDRS)
	@$(CC) $(CFLAGS) $(OBJS) $(LIBS) $(HEADERS) -o $(NAME)
	@echo "$(GREEN)*******************************$(NC)"
	@echo "$(GREEN)*  $(NAME) COMPILED  *$(NC)"
	@echo "$(GREEN)*******************************$(NC)"

libft: $(LIBFT)
$(LIBFT):
	@$(MAKE) -s -C $(LIBFTDIR) bonus
	@echo "$(GREEN)**********************$(NC)"
	@echo "$(GREEN)*   LIBFT COMPILED   *$(NC)"
	@echo "$(GREEN)**********************$(NC)"

clean:
	@$(MAKE) -s -C $(LIBFTDIR) clean
	@$(RMF) $(OBJS) $(B_OBJECTS) ./*.o
	@echo "$(GREEN)**********************$(NC)"
	@echo "$(GREEN)*  DIRECTORY CLEANED *$(NC)"
	@echo "$(GREEN)**********************$(NC)"

fclean: clean
	@$(MAKE) -s -C $(LIBFTDIR) fclean
	@$(RMF) -r $(INFOS)
	@$(RMF) $(LIBFT) $(NAME) $(BONUS)

re: fclean all

.PHONY: re fclean clean all libft
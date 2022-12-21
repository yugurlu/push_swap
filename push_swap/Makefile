



NAME = push_swap
CC = gcc
FLAGS = -Wall -Wextra -Werror

SRCS = ft_split.c \
	sort.c \
	utils.c \
	radix.c \
	push_swap.c \
	move.c \
	actions.c \
	actions2.c \
	actions3.c \
	actions4.c \
	check_and_creat.c \
	ft_atoi.c \
	utils2.c \

OBJS = $(SRCS:.c=.o)

YELLOW		:= \033[1;45m
CYAN 		:= \033[1;34m

all: $(NAME)
	@echo "$(YELLOW)Compile Completed!"

$(NAME): $(OBJS)
	@$(CC) $(FLAGS) -o $(NAME) $(OBJS)

.c.o:
	@echo "$(CYAN)Complining: $<"
	@$(CC) $(FLAGS) -c $< -o $(<:.c=.o)

clean:
	@$(RM) $(OBJS)

fclean: clean
	@$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re

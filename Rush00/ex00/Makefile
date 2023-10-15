NAME = rush00

CC = cc

CFLAGS = -Wall -Wextra -Werror

SRCS = main.c rush01.c ft_putchar.c 

all:
	@echo "compiling..."
	@$(CC) -o $(NAME) $(CFLAGS) $(SRCS)
	@echo "done!\n"

run:	all
	@./$(NAME)


fclean:
	@rm $(NAME)

re: 	fclean all

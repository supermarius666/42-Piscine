CC			= cc

NAME 		= libft.a

INCS 		= includes

LIBC 		= ar rc

LIBR		= ranlib

CFLAGS 		= -Wall -Wextra -Werror 

RM 			= rm

SRCS = srcs/ft_putchar.c srcs/ft_swap.c srcs/ft_putstr.c srcs/ft_strlen.c srcs/ft_strcmp.c 

OBJS = $(SRCS:.c=.o)

.c.o:
	$(CC) $(CFLAGS) -c $< -o $(<:.c=.o) -I$(INCS)

$(NAME): $(OBJS)
	$(LIBC) $(NAME) $(OBJS)
	$(LIBR) $(NAME)

all: $(NAME)
	
clean:
	$(RM) $(OBJS)

fclean:	clean
	$(RM) $(NAME)

re: fclean all


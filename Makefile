NAME = push_swap
INCLUDES_PATH = ./includes
LIBFT_PATH = ./libft
LIB = libft/libft.a
CC = cc
CFLAGS = -Wall -Werror -Wextra -g3

SRCS = ./sources/main.c				\
		./sources/validations.c		\
		./sources/stack.c			\
		./sources/utils.c			\
		./sources/push.c			\
		./sources/swap.c			\
		./sources/rotate.c			\
		./sources/reverse_rotate.c	\
		./sources/sort.c

OBJS    = $(SRCS:%.c=%.o)

all:    $(NAME) ${LIB}

$(NAME):	${LIB} $(OBJS)
				$(CC) $(CFLAGS) $(OBJS) -o $@ -L $(LIBFT_PATH) -I $(INCLUDES_PATH) -I $(LIBFT_PATH) -lft

%.o:		%.c
				$(CC) $(CFLAGS) -I $(INCLUDES_PATH) -I $(LIBFT_PATH) -o $@ -c $<

${LIB}:
				make -C libft

run2:		$(NAME)
				ARG="2 1"; ./push_swap $$ARG | wc -l; ./push_swap $$ARG | ./checker_linux $$ARG

run3:		$(NAME)
				ARG="2 1 0"; ./push_swap $$ARG | wc -l; ./push_swap $$ARG | ./checker_linux $$ARG

run5:		$(NAME)
				ARG="1 5 2 4 3"; ./push_swap $$ARG | wc -l; ./push_swap $$ARG | ./checker_linux $$ARG

runRandom5:	$(NAME)
				ARG=$$(seq  5 | shuf | tr '\n' ' '); ./push_swap $$ARG | wc -l; ./push_swap $$ARG | ./checker_linux $$ARG; echo $$ARG

run100:		$(NAME)
				ARG=$$(seq  100 | shuf | tr '\n' ' '); ./push_swap $$ARG | wc -l; ./push_swap $$ARG | ./checker_linux $$ARG

run500:		$(NAME)
				ARG=$$(seq  500 | shuf | tr '\n' ' '); ./push_swap $$ARG | wc -l; ./push_swap $$ARG | ./checker_linux $$ARG

clean:
				$(MAKE) clean -C $(LIBFT_PATH)
				rm -f $(OBJS)

fclean:		clean
				$(MAKE) fclean -C $(LIBFT_PATH)
				rm -f $(NAME)

re:			fclean all

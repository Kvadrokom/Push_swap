NAME := push_swap

SRC :=  check_args.c\
		main.c\
		rab.c\
		init_stack.c\
		print.c\
		sab.c\
		ss.c\
		rrab.c\
		rrr.c\
		pab.c\
		qsort.c\
		input.c\
		ft_sort.c

OBJ := $(patsubst %.c, %.o, $(SRC))

CC := gcc -g

FLAGS := -Wall -Wextra -Werror -fsanitize=address

all: $(NAME)

%.o: %.c
	$(CC)  -c $< -o $@

LIBFT := libft.a

$(NAME) :		$(LIBFT) $(OBJ) pushswap.h
	$(CC)  $(OBJ) -o $(NAME) $(LIBFT)

$(LIBFT) : 
	@$(MAKE) full -C libft/
	@mv libft/$(LIBFT) .

clean :
	@$(MAKE) -C libft clean
	rm -f $(OBJ)

fclean : clean
	rm -f $(NAME) $(LIBFT) a.out

re : fclean all

.PHONY:			all clean fclean re

test :	
	gcc -g ft_split_cmd_args.c ft_split_utils.c libft.a

test_print : $(LIBFT) $(OBJ) parser.h
	$(CC) $(FLAGS) $(OBJ) $(LIBFT)


leak:
	export MallocStackLoggingNoCompact=1

valg:


norm:
	norminette 	

add:
	git add $(SRC) push_swap.h
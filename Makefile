NAME := push_swap

CC		=	gcc -g

CFLAGS	= 	-Wall -Wextra -Werror

OBJDIR	=	objs
SRCDIR	=	src

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
		ft_sort.c\
		rr.c\
		ft_light_sort.c\
		ft_buble_sort.c\
		all_sorted.c\
		sort_three.c\
		sort_five.c\
		ft_min_max.c

SRC		:=	$(addprefix $(SRCDIR)/, $(SRC))
OBJ		=	$(patsubst $(SRCDIR)/%, $(OBJDIR)/%, $(SRC:.c=.o))

all:		$(NAME)

$(NAME):	$(OBJ) $(LIBFT)
			$(CC) $(CFLAGS) $(OBJ) -o $(NAME) $(LIBFT)

$(OBJ):		|$(OBJDIR)

$(OBJDIR):
			@mkdir $(OBJDIR)

$(OBJDIR)/%.o:	$(SRCDIR)/%.c ./includes/pushswap.h $(LIBFT)
			$(CC) $(CFLAGS) -I ./includes -c $< -o $@

LIBFT := libft.a

$(LIBFT) : 
	@$(MAKE) full -C libft/
	@mv libft/$(LIBFT) .

clean:
			@rm -rf $(OBJDIR)

fclean:		clean
			@rm -f $(NAME)

re:			fclean all

.PHONY:		all clean fclean re

leak:
	export MallocStackLoggingNoCompact=1

valg:
	valgrind --leak-check=full

norm:
	norminette $(SRC) pushswap.h libft/	

add:
	git add $(SRC) pushswap.h libft/
NAME = libftprintf.a
CC = CC
CFLAGS = -Wall -Wextra -Werror

SRCS = ft_printf.c print_%.c print_c.c print_d.c print_large_x.c print_p.c print_s.c print_u.c print_x.c to_hex.c
# SRCS_BONUS = 
HEAD = ft_print.h
OBJS = $(SRCS:.c=.o)
# OBJS_BONUS = $(SRCS_BONUS:.c=.o)

# ifdef WITH_BONUS
# OBJS += $(OBJS_BONUS)
# endif

$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS) 

%.o: %.c
	$(CC) $(CFLAGS) -I $(HEAD) -c $< -o $@

all: $(NAME)

# bonus:
# 	@make WITH_BONUS=1

clean:
	rm -f $(OBJS) $(OBJS_BONUS)
	
fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re 
# bonus
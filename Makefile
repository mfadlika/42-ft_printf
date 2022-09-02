NAME		= libftprintf.a
INCLUDES	= include
LIBFT		= libft
CC			= gcc
CFLAGS		= -Wall -Wextra -Werror -I
AR			= ar -rcs
RM			= rm -f

SRCS		= ft_printf.c ft_printf_xp.c ft_printf_unsigned.c ft_printf_utils.c

OBJS		= $(SRCS:.c=.o)

all:		$(NAME)

$(NAME):	$(OBJS)
			@make -C $(LIBFT)
			@cp libft/libft.a $(shell pwd)
			@mv libft.a $(NAME)
			$(AR) $(NAME) $(OBJS)
			@echo "$ ft_printf compiled"

.c.o:
			$(CC) $(CFLAGS) $(INCLUDES) -c $< -o $(<:.c=.o)

clean:
			$(RM) $(OBJS)
			@make clean -C $(LIBFT)
			@echo "$ ft_printf object files cleaned"

fclean:		clean
			$(RM) $(NAME)
			$(RM) $(LIBFT)/libft.a
			@echo "$ ft_printf executable files cleaned"
			@echo "$ libft executable file cleaned"

re:			fclean all
			@echo "$ ft_printf cleaned and rebuilt everything"

.PHONY:		all clean fclean re
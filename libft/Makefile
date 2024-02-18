NAME = libft.a
SRC = ft_putchar_fd.c ft_putnbr_fd.c ft_putstr_fd.c ft_strchr.c ft_strlen.c
OBJ = $(SRC:.c=.o)
HEADER = libft.h

all : $(NAME)

$(NAME) : $(OBJ) $(HEADER)
	ar rcs $(NAME) $(OBJ)
	ranlib $(NAME)
%.o : %.c
	cc -Wall -Wextra -Werror -c $< -o $@ -I $(HEADER)

clean :
	rm -rf $(OBJ)
fclean : clean
	rm -rf $(NAME)

re : clean fclean all

.PHONY : re all clean fclean
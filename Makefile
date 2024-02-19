NAME = libftprintf.a
SRC =  ft_printf.c print_character.c print_decimal.c print_heximal.c print_integer.c  print_adres.c print_string.c print_uint.c
OBJ = $(SRC:.c=.o)
CC = cc
FLAGS = -Wall -Wextra -Werror
ARCHIVE = ar rcs
HEADER = ft_printf.h

all : $(NAME)

$(NAME) : $(OBJ) $(HEADER)
	make -C ./libft
	cp ./libft/libft.a $(NAME)
	ranlib $(NAME)
	$(ARCHIVE) $(NAME) $(OBJ)


%.o : %.c
	$(CC) $(FLAGS) -c $< -o $@ -I $(HEADER)

clean :
	rm -rf $(OBJ)
	make clean -C ./libft

fclean : clean
	rm -rf $(NAME)
	make fclean -C ./libft

re : fclean all

.PHONY : all clean fclean re
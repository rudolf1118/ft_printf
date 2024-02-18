NAME = libftprintf.a
SRC = print_adress.c print_char.c print_decimal.c print_hex.c print_int.c print_str.c print_ui.c ft_printf.c
OBJ = $(SRC:.c=.o)
CC = cc
FLAGS = -Wall -Wextra -Werror
ARCHIVE = ar rcs
HEADER = printf.h

all : $(NAME)

$(NAME) : $(OBJ) $(HEADER)
	$(ARCHIVE) $(NAME) $(OBJ)

%.o : %.c
	$(CC) $(FLAGS) -c $< -o $@ -I $(HEADER)

clean :
	rm -rf $(OBJ)

fclean : clean
	rm -rf $(NAME)

re : fclean all

.PHONY : all clean fclean re
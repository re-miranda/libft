# LIBS
NAME = libftgnl.a
LIBFT = ../libft/libft.a

# LIBS PATH
NAME_PATH = ./
LIBFT_PATH = ../libft

# OTHERS
CC = cc
AR = ar -rcs
RM = rm -rf
CFLAGS = -Wall -Wextra -Werror

# FILES
SRC = get_next_line.c \
	get_next_line_utils.c
OBJ = $(SRC:%.c=%.o)
HEADER = ./

all: $(NAME)

%.o:	%.c
	$(CC) $(CFLAGS) -c -I$(HEADER) $< -o $(<:%.c=%.o)

$(NAME): $(LIBFT)
	cp $(LIBFT) $(NAME_PATH)
	mv ./libft.a $(NAME)
	$(AR) $(NAME) $(OBJ)

$(LIBFT)
	make all -C $(LIBFT_PATH)

clean:
	make clean -C $(LIBFT_PATH)
	$(RM) $(OBJ)

fclean: clean
	make fclean -C $(LIBFT_PATH)
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re

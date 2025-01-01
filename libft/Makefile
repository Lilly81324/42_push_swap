CC = cc
CFLAGS = -Wall -Wextra -Werror
NAME = libft.a

PRINTF_DIR = ./ft_printf
PRINTF_LIB = $(PRINTF_DIR)/libftprintf.a

BNS_FILES = $(wildcard ft_lst*.o)
SRC_FILES = $(wildcard *.c)
OBJ_FILES = $(SRC_FILES:%.c=%.o)
NON_BNS_OBJ_FILES = $(filter-out ft_lst%.o, $(OBJ_FILES))

all: $(PRINTF_LIB) $(NAME)

# Rule to compile source files into object files
%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

# Compile all objects into final file
$(NAME): $(NON_BNS_OBJ_FILES) $(PRINTF_LIB)
	ar rcs $(NAME) $(NON_BNS_OBJ_FILES) $(PRINTF_LIB)

# Rule to compile the printf library
$(PRINTF_LIB):
	make -C $(PRINTF_DIR)

# Rule to compile bonus library
bonus: $(OBJ_FILES) $(PRINTF_LIB)
	ar rcs $(NAME) $(OBJ_FILES) $(PRINTF_LIB)

# Deletes object files
clean:
	make -C $(PRINTF_DIR) clean
	rm -rf $(OBJ_FILES)

# Deletes object files and librarys
fclean: clean
	make -C $(PRINTF_DIR) fclean
	rm -f $(NAME) $(PRINTF_LIB)

re: fclean all

.PHONY: all bonus clean fclean re

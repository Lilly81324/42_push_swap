CC = cc
CCFLAGS = -Wall -Wextra -Werror
SRC_FOLDER = src
OBJ_FOLDER = obj
SOURCE_FILES = $(SRC_FOLDER)/ft_push_swap.c \
				$(SRC_FOLDER)/ft_best_case.c \
				$(SRC_FOLDER)/ft_best_index.c \
				$(SRC_FOLDER)/ft_best_moves.c \
				$(SRC_FOLDER)/ft_brute_sort_base.c \
				$(SRC_FOLDER)/ft_brute_sort_ext.c \
				$(SRC_FOLDER)/ft_case_one.c \
				$(SRC_FOLDER)/ft_case_three.c \
				$(SRC_FOLDER)/ft_case_two.c \
				$(SRC_FOLDER)/ft_case_zero.c \
				$(SRC_FOLDER)/ft_cross_moves.c \
				$(SRC_FOLDER)/ft_handle_rotation.c \
				$(SRC_FOLDER)/ft_index_big.c \
				$(SRC_FOLDER)/ft_index_smal.c \
				$(SRC_FOLDER)/ft_is_list_order.c \
				$(SRC_FOLDER)/ft_launcher.c \
				$(SRC_FOLDER)/ft_make_list.c \
				$(SRC_FOLDER)/ft_max.c \
				$(SRC_FOLDER)/ft_min.c \
				$(SRC_FOLDER)/ft_next_big.c \
				$(SRC_FOLDER)/ft_next_smal.c \
				$(SRC_FOLDER)/ft_print_array.c \
				$(SRC_FOLDER)/ft_pusha.c \
				$(SRC_FOLDER)/ft_pushb.c \
				$(SRC_FOLDER)/ft_rev_rotate.c \
				$(SRC_FOLDER)/ft_rotate.c \
				$(SRC_FOLDER)/ft_rr_moves.c \
				$(SRC_FOLDER)/ft_shuffle.c \
				$(SRC_FOLDER)/ft_swap.c \
				$(SRC_FOLDER)/ft_turk_sort.c \
				$(SRC_FOLDER)/ft_write_inst.c


OBJ_FILES = $(patsubst $(SRC_FOLDER)/%.c,$(OBJ_FOLDER)/%.o,$(SOURCE_FILES))
PROGRAM = push_swap

all: $(PROGRAM)

$(PROGRAM): $(OBJ_FILES)
	$(CC) $(CCFLAGS) $(OBJ_FILES) -o $(PROGRAM)

$(OBJ_FOLDER)/%.o: $(SRC_FOLDER)/%.c | $(OBJ_FOLDER)
	$(CC) $(CCFLAGS) -c $< -o $@

$(OBJ_FOLDER):
	mkdir -p $(OBJ_FOLDER)

clean:
	rm -rf $(OBJ_FILES) $(OBJ_FOLDER)

fclean: clean
	rm -f $(PROGRAM)

re: fclean all

.PHONY: all clean fclean
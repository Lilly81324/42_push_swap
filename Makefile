CC = cc
CCFLAGS = -Wall -Wextra -Werror

LIBFT_DIR = ./libft
LIBFT_LIB = $(LIBFT_DIR)/libft.a
SRC_FOLDER = src
SRC_FILES = ft_aa_main.c \
			ft_atoi_check_one.c \
			ft_atoi_check_two.c \
			ft_best_case.c \
			ft_best_index.c \
			ft_best_moves.c \
			ft_brute_sort_base.c \
			ft_brute_sort_doubles.c \
			ft_brute_sort_ext.c \
			ft_brute_sort_insort.c \
			ft_case_one.c \
			ft_case_three.c \
			ft_case_two.c \
			ft_case_zero.c \
			ft_check_input.c \
			ft_cross_moves.c \
			ft_handle_rotation.c \
			ft_index_big.c \
			ft_index_smal.c \
			ft_inpt_abort.c \
			ft_is_list_order.c \
			ft_launcher.c \
			ft_max.c \
			ft_min.c \
			ft_next_big.c \
			ft_next_smal.c \
			ft_prepare_lst.c \
			ft_print_array.c \
			ft_pusha.c \
			ft_pushb.c \
			ft_rev_rotate.c \
			ft_rotate.c \
			ft_rr_moves.c \
			ft_swap.c \
			ft_turk_sort.c \
			ft_write_inst.c
OBJ_FILES = $(SRC_FILES:%.c=%.o)
PROGRAM = push_swap

all: $(LIBFT_LIB) $(PROGRAM)

$(LIBFT_LIB):
	make -C $(LIBFT_DIR)

$(PROGRAM): $(OBJ_FILES) $(LIBFT_LIB)
	$(CC) $(CCFLAGS) $(OBJ_FILES) $(LIBFT_LIB) -o $(PROGRAM)

$(OBJ_DIR)/%.o: %.c
	$(CC) $(CCFLAGS) -c $< -o $@

clean:
	make -C $(LIBFT_DIR) clean
	rm -rf $(OBJ_FILES)

fclean: clean
	make -C $(LIBFT_DIR) fclean
	rm -f $(PROGRAM)

re: fclean all

.PHONY: all clean fclean
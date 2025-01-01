CC = cc
CCFLAGS = -Wall -Wextra -Werror

SRC_FILES = ft_random_list.c
PROGRAM = randlist

all: $(PROGRAM)

$(PROGRAM): $(SRC_FILES)
	$(CC) $(CCFLAGS) $(SRC_FILES) -o $(PROGRAM)

clean:
	rm -rf $(PROGRAM)

re: clean all

.PHONY: all clean
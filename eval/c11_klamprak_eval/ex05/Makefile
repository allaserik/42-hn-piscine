# Compiler and flags
CC = cc
CFLAGS = -Wall -Wextra -Werror

# Directories
SRC_DIR = srcs
INCLUDE_DIR = includes

# Source files
SRCS = $(addprefix $(SRC_DIR)/, ft_atoi.c ft_ops.c ft_putnbr.c main.c)
OBJS = $(SRCS:.c=.o)

# Executable name
EXECUTABLE = do-op

# Targets
all: $(EXECUTABLE)

$(EXECUTABLE): $(OBJS)
	$(CC) $(CFLAGS) -o $@ $^

%.o: %.c
	$(CC) $(CFLAGS) -c -I$(INCLUDE_DIR) $< -o $@

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(EXECUTABLE)

re: fclean all

.PHONY: all clean fclean re

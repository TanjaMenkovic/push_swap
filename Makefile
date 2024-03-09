NAME = push_swap

SRC_FILES = error_utils.c errors.c inti.c main.c \
            stack_utils.c operations.c revrotate.c \
			utils.c algorithm.c rotate.c checker.c \
			push.c swap.c
OBJ_FILES = $(SRC_FILES:.c=.o)
LIBFT = libft/libft.a
HDR_FILES = push_swap.h

CC = cc
CFLAGS = -Wall -Wextra -Werror

all: $(LIBFT) $(NAME)

$(LIBFT):
	make -C libft/

$(NAME): $(OBJ_FILES)
	${CC} ${CFLAGS} ${OBJ_FILES} ${LIBFT} -o ${NAME} -lft -Llibft

%.o: %.c
	$(CC) $(CFLAGS) -c ${SRC_FILES} -I ${HDR_FILES}

clean:
	make clean -C ./libft
	rm -f $(OBJ_FILES)

fclean: clean
	make fclean -C ./libft
	rm -f $(NAME)

re: fclean all

.PHONY: fclean all clean


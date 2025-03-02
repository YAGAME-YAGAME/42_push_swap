CC = cc
CFLAGS = -Wall -Wextra -Werror

MOVES_DIR = ./operations/

SRCS= 	push_swap.c \
		check_args.c \
		utils.c \
		check_moves.c \
		sort.c \
		best_move.c \
		best_move_utils.c \
		movement.c \
		$(MOVES_DIR)sa.c 	$(MOVES_DIR)sb.c \
		$(MOVES_DIR)pa.c 	$(MOVES_DIR)pb.c \
		$(MOVES_DIR)rra.c 	$(MOVES_DIR)rrb.c \
		$(MOVES_DIR)ra.c 	$(MOVES_DIR)rb.c \
		$(MOVES_DIR)rr.c 	$(MOVES_DIR)rrr.c \
		$(MOVES_DIR)ss.c \

OBJS = $(SRCS:.c=.o)
LIBFT = ../libft/libft.a
LIBFT_INC = ../libft/libft.h
INCLUDE = ../include/push_swap.h
TARGET = ../push_swap

all : $(TARGET) 

$(TARGET) : $(OBJS) $(LIBFT)
	$(CC) $(CFLAGS) $(OBJS) $(LIBFT)  -o $(TARGET)

%.o: %.c  $(INCLUDE) $(LIBFT_INC)
	$(CC) $(CFLAGS) -c $< -o $@

$(LIBFT) : $(LIBFT_INC)
	make -C ../libft/

clean :
	@make -C ../libft/ clean
	rm -rf  $(OBJS)

fclean : clean
	@make -C ../libft/ fclean
	rm -rf ../push_swap

re : fclean all


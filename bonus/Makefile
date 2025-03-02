CC = cc
CFLAGS = -Wall -Wextra -Werror

MOVES_DIR_BONUS = ./operations/



SRCS_BONUS= ./get/get_next_line.c \
		./get/get_next_line_utils.c \
		$(MOVES_DIR_BONUS)pa_bonus.c \
		$(MOVES_DIR_BONUS)pb_bonus.c \
		$(MOVES_DIR_BONUS)ra_bonus.c \
		$(MOVES_DIR_BONUS)rb_bonus.c \
		$(MOVES_DIR_BONUS)rr_bonus.c \
		$(MOVES_DIR_BONUS)rra_bonus.c \
		$(MOVES_DIR_BONUS)rrb_bonus.c \
		$(MOVES_DIR_BONUS)rrr_bonus.c \
		$(MOVES_DIR_BONUS)sa_bonus.c \
		$(MOVES_DIR_BONUS)sb_bonus.c \
		$(MOVES_DIR_BONUS)ss_bonus.c \
		./push_swap_bonus.c \
		./instructions.c \
		./utils_bonus.c \
		./check_args_bonus.c \
		./check_moves_bonus.c \


OBJS_BONUS = $(SRCS_BONUS:.c=.o)
LIBFT = ../libft/libft.a
LIBFT_INC = ../libft/libft.h
INCLUDE = ../include/push_swap_bonus.h
TARGET = ../checker
	
all : $(TARGET)

$(TARGET) : $(OBJS_BONUS) $(LIBFT)
	$(CC) $(CFLAGS) $(OBJS_BONUS) $(LIBFT) -o $(TARGET)

%.o: %.c $(INCLUDE) $(LIBFT_INC)
	$(CC) $(CFLAGS) -c $< -o $@

$(LIBFT) : $(LIBFT_INC)
	make -C ../libft/

clean :
	rm -rf $(OBJS_BONUS)

fclean : clean
	rm  -rf ../checker




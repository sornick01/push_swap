NAME		:= push_swap
NAME_BONUS	:= checker

CC			:= gcc
CFLAGS		:= -Wall -Wextra -Werror
DEP_FLAGS	:= -MMD

SRCS		:=	$(addprefix source/, \
								big_sort.c \
								check.c \
								errors.c \
								filling.c \
								little_sort.c \
								quick_sort.c \
								start_sorting.c \
								ft_atoi.c \
								ft_isdigit.c \
								ft_putendl_fd.c \
								ft_strlen.c \
								ft_strncmp.c \
								main.c \
								) \
				$(addprefix stack_operations/, \
								push.c \
								reverse_rotate.c \
								rotate.c \
								stack_utils.c \
								swap.c \
								)

SRCS_BONUS	:=	$(addprefix bonus_source/, \
								main_bonus.c \
								get_next_line_bonus.c \
								get_next_line_utils_bonus.c \
								check_bonus.c \
								errors_bonus.c \
								filling_bonus.c \
								ft_atoi_bonus.c \
								ft_isdigit_bonus.c \
								ft_putendl_fd_bonus.c \
								ft_strlen_bonus.c \
								ft_strncmp_bonus.c \
								get_commands_bonus.c \
								) \
				$(addprefix stack_operations_bonus/, \
								push_bonus.c \
								reverse_rotate_bonus.c \
								rotate_bonus.c \
								stack_utils_bonus.c \
								swap_bonus.c \
								)

OBJS_DIR 	:= .objects
OBJS 		:= $(addprefix $(OBJS_DIR)/, \
						$(patsubst %.c, %.o, $(SRCS)))

OBJS_DIR_BONUS	:= .bonus_objects
OBJS_BONUS		:= $(addprefix $(OBJS_DIR_BONUS)/, \
						$(patsubst %.c, %.o, $(SRCS_BONUS)))

DEPS		:= $(addprefix $(OBJS_DIR)/, \
						$(patsubst %.c, %.d, $(SRCS)))

DEPS_BONUS	:= $(addprefix $(OBJS_DIR_BONUS)/, \
						$(patsubst %.c, %.d, $(SRCS_BONUS)))

all:	$(NAME)

$(NAME):		$(OBJS)
			$(CC) $(OBJS) $(CFLAGS) -o $@

$(OBJS_DIR)/%.o:	%.c | $(OBJS_DIR)
			mkdir -p $(dir $@)
			$(CC) $(CFLAGS) $(DEP_FLAGS) -c $< -o $@

$(OBJS_DIR):
			mkdir -p $@

bonus:	$(NAME_BONUS)

$(NAME_BONUS):	$(OBJS_BONUS)
			$(CC) $(OBJS_BONUS) $(CFLAGS) -o $@

$(OBJS_DIR_BONUS)/%.o:	%.c | $(OBJS_DIR_BONUS)
			mkdir -p $(dir $@)
			$(CC) $(CFLAGS) $(DEP_FLAGS) -c $< -o $@

$(OBJS_DIR_BONUS):
			mkdir -p $@

clean:
			rm -rf $(OBJS) $(DEPS) $(OBJS_DIR)
			rm -rf $(OBJS_BONUS) $(DEPS_BONUS) $(OBJS_DIR_BONUS)

fclean:				clean
			rm -rf $(NAME)
			rm -rf $(NAME_BONUS)

re:					fclean all

.PHONY:		all clean fclean re

-include $(DEPS)
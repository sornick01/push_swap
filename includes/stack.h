/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpeanuts <mpeanuts@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/03 17:06:52 by mpeanuts          #+#    #+#             */
/*   Updated: 2022/03/28 21:54:46 by mpeanuts         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef STACK_H
# define STACK_H

# include <stdlib.h>
# include <unistd.h>
# include <stdio.h> //убрать

void			ft_putendl_fd(char *s, int fd);

typedef struct s_stack_elem
{
	int					data;
	int					order;
	int					flag;
	struct s_stack_elem	*prev;
	struct s_stack_elem	*next;

}	t_stack_elem;

typedef struct s_stack
{
	t_stack_elem	*top;
	t_stack_elem	*bot;
	int				stack_size;
}	t_stack;

typedef struct s_two_stacks
{
	int			arr_size;
	int			*sorted_array;
	t_stack		*a;
	t_stack		*b;

}	t_two_stacks;

t_stack			*create_stack(void);
t_stack_elem	*create_stack_elem(int data);

void			clear_stack(t_stack *stack);

void			swap_a(t_two_stacks *stacks);
void			swap_b(t_two_stacks *stacks);
void			swap_a_b(t_two_stacks *stacks);

int				push_value(t_stack *stack, int data);
void			push_a(t_two_stacks *stacks);
void			push_b(t_two_stacks *stacks);

void			rotate_a(t_two_stacks *stacks);
void			rotate_b(t_two_stacks *stacks);
void			rotate_a_b(t_two_stacks *stacks);

void			reverse_rotate_a(t_two_stacks *stacks);
void			reverse_rotate_b(t_two_stacks *stacks);
void			reverse_rotate_a_b(t_two_stacks *stacks);

#endif
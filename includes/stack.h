/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpeanuts <mpeanuts@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/03 17:06:52 by mpeanuts          #+#    #+#             */
/*   Updated: 2022/03/11 18:01:25 by mpeanuts         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef STACK_H
# define STACK_H

# include <stdlib.h>
# include <stdio.h> //убрать
# include "../libft/libft.h"

typedef struct s_stack_elem
{

	int 				data;
	struct s_stack_elem	*prev;
	struct s_stack_elem	*next;

}	t_stack_elem;

typedef struct s_stack
{

	t_stack_elem	*top;
	t_stack_elem	*bot;

}	t_stack;

t_stack			*create_stack();
t_stack_elem	*create_stack_elem(int data);
void			clear_stack(t_stack *stack);


void			swap_a(t_stack *a);
void			swap_b(t_stack *b);
void			swap_a_b(t_stack *a, t_stack *b);

int				push_value(t_stack *stack, int data);
static void		push_elem(t_stack *dest , t_stack *source);
void			push_a(t_stack *a, t_stack *b);
void			push_b(t_stack *a, t_stack *b);

void			rotate_a(t_stack *a);
void			rotate_b(t_stack *b);
void			rotate_a_b(t_stack *a, t_stack *b);

void			reverse_rotate_a(t_stack *a);
void			reverse_rotate_b(t_stack *b);
void			reverse_rotate_a_b(t_stack *a, t_stack *b);

#endif
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotate.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpeanuts <mpeanuts@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/07 17:26:29 by mpeanuts          #+#    #+#             */
/*   Updated: 2022/03/19 19:29:49 by mpeanuts         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/stack.h"

static void	reverse_rotate(t_stack *stack)
{
	t_stack_elem	*tmp;
	
	tmp = stack->bot;
	stack->bot = stack->bot->prev;
	stack->bot->next = NULL;
	tmp->prev = NULL;
	tmp->next = stack->top;
	stack->top->prev = tmp;
	stack->top = tmp;
}

void	reverse_rotate_a(t_stack *a)
{
	if (a->top && a->top->next)
	{
		reverse_rotate(a);
		ft_putendl_fd("rra", 1);
	}
}

void	reverse_rotate_b(t_stack *b)
{
	if (b->top && b->top->next)
	{
		reverse_rotate(b);
		ft_putendl_fd("rrb", 1);
	}
}

void	reverse_rotate_a_b(t_stack *a, t_stack *b)
{
	if (a->top || b->top)
	{
		if (a->top && a->top->next)
		{
			reverse_rotate(a);
		}
		if (b->top && b->top->next)
		{
			reverse_rotate(b);
		}
		ft_putendl_fd("rrr", 1);
	}
}

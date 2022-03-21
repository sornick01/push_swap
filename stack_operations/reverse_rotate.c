/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotate.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpeanuts <mpeanuts@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/07 17:26:29 by mpeanuts          #+#    #+#             */
/*   Updated: 2022/03/21 17:17:43 by mpeanuts         ###   ########.fr       */
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

void	reverse_rotate_a(t_two_stacks *stacks)
{
	if (stacks->a->top && stacks->a->top->next)
	{
		reverse_rotate(stacks->a);
		ft_putendl_fd("rra", 1);
	}
}

void	reverse_rotate_b(t_two_stacks *stacks)
{
	if (stacks->b->top && stacks->b->top->next)
	{
		reverse_rotate(stacks->b);
		ft_putendl_fd("rrb", 1);
	}
}

void	reverse_rotate_a_b(t_two_stacks *stacks)
{
	if (stacks->a->top || stacks->b->top)
	{
		if (stacks->a->top && stacks->a->top->next)
		{
			reverse_rotate(stacks->a);
		}
		if (stacks->b->top && stacks->b->top->next)
		{
			reverse_rotate(stacks->b);
		}
		ft_putendl_fd("rrr", 1);
	}
}

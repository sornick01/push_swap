/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate_bonus.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpeanuts <mpeanuts@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/07 15:22:13 by mpeanuts          #+#    #+#             */
/*   Updated: 2022/03/29 19:12:07 by mpeanuts         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../bonus_includes/stack_bonus.h"

static void	rotate(t_stack *stack)
{
	t_stack_elem	*tmp;

	tmp = stack->top;
	stack->top = stack->top->next;
	stack->top->prev = NULL;
	tmp->next = NULL;
	tmp->prev = stack->bot;
	stack->bot->next = tmp;
	stack->bot = tmp;
}

void	rotate_a(t_two_stacks *stacks)
{
	if (stacks->a->top && stacks->a->top->next)
	{
		rotate(stacks->a);
	}
}

void	rotate_b(t_two_stacks *stacks)
{
	if (stacks->b->top && stacks->b->top->next > 0)
	{
		rotate(stacks->b);
	}
}

void	rotate_a_b(t_two_stacks *stacks)
{
	if (stacks->a->top || stacks->b->top)
	{
		if (stacks->a->top && stacks->a->top->next)
		{
			rotate(stacks->a);
		}
		if (stacks->b->top && stacks->b->top->next)
		{
			rotate(stacks->b);
		}
	}
}

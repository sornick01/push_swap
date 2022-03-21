/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpeanuts <mpeanuts@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/07 15:22:13 by mpeanuts          #+#    #+#             */
/*   Updated: 2022/03/21 17:16:00 by mpeanuts         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/stack.h"

// static void	rotate(t_stack *stack)
// {
// 	int	tmp;
// 	int	i;

// 	i = stack->top_id;
// 	if (i > 0)
// 	{
// 		tmp = stack->array[i];
// 		while (i > 0)
// 		{
// 			stack->array[i] = stack->array[i - 1];
// 			--i;
// 		}
// 		stack->array[i] = tmp;
// 	}
// }

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

// void	rotate_a(t_stack *a)
// {
// 	if (a->top && a->top->next)
// 	{
// 		rotate(a);
// 		ft_putendl_fd("ra", 1);
// 	}
// }

void	rotate_a(t_two_stacks *stacks)
{
	if (stacks->a->top && stacks->a->top->next)
	{
		rotate(stacks->a);
		ft_putendl_fd("ra", 1);
	}
}

// void	rotate_b(t_stack *b)
// {
// 	if (b->top && b->top->next > 0)
// 	{
// 		rotate(b);
// 		ft_putendl_fd("rb", 1);
// 	}
// }

void	rotate_b(t_two_stacks *stacks)
{
	if (stacks->b->top && stacks->b->top->next > 0)
	{
		rotate(stacks->b);
		ft_putendl_fd("rb", 1);
	}
}

// void	rotate_a_b(t_stack *a, t_stack *b)
// {
// 	if (a->top || b->top)
// 	{
// 		if (a->top && a->top->next)
// 		{
// 			rotate(a);
// 		}
// 		if (b->top && b->top->next)
// 		{
// 			rotate(b);
// 		}
// 		ft_putendl_fd("rr", 1);
// 	}
// }

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
		ft_putendl_fd("rr", 1);
	}
}

/*
1	2		top_id(5)
2	3		4
3	4		3
4	5		2
5	6		1
6	1		0
*/
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpeanuts <mpeanuts@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/07 15:22:13 by mpeanuts          #+#    #+#             */
/*   Updated: 2022/02/07 20:00:41 by mpeanuts         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/stack.h"

static void	rotate(t_stack *stack)
{
	int	tmp;
	int	i;

	i = stack->top_id;
	if (i > 0)
	{
		tmp = stack->array[i];
		while (i > 0)
		{
			stack->array[i] = stack->array[i - 1];
			--i;
		}
		stack->array[i] = tmp;
	}
}

void	rotate_a(t_stack *a)
{
	if (a->top_id > 0)
	{
		rotate(a);
		ft_putendl_fd("ra", 1);
	}
}

void	rotate_b(t_stack *b)
{
	if (b->top_id > 0)
	{
		rotate(b);
		ft_putendl_fd("rb", 1);
	}
}

void	rotate_a_b(t_stack *a, t_stack *b)
{
	if (a->top_id > 0 || b->top_id > 0)
	{
		rotate(a);
		rotate(b);
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
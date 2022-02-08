/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpeanuts <mpeanuts@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/03 20:16:08 by mpeanuts          #+#    #+#             */
/*   Updated: 2022/02/07 20:06:37 by mpeanuts         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/stack.h"

static void	swap(t_stack *stack)
{
	int	tmp_data;
	int	top_id;

	top_id = stack->top_id;
	if (top_id > 0)
	{
		tmp_data = stack->array[top_id];
		stack->array[top_id] = stack->array[top_id - 1];
		stack->array[top_id - 1] = tmp_data;
	}
}

void	swap_a(t_stack *a)
{
	if (a->top_id > 0)
	{
		swap(a);
		ft_putendl_fd("sa", 1);
	}
}

void	swap_b(t_stack *b)
{
	if (b->top_id > 0)
	{
		swap(b);
		ft_putendl_fd("sb", 1);
	}
}

void	swap_a_b(t_stack *a, t_stack *b)
{
	if (a->top_id > 0 || b->top_id > 0)
	{
		swap(a);
		swap(b);
		ft_putendl_fd("ss", 1);
	}
}

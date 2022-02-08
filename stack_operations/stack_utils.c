/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_utils.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpeanuts <mpeanuts@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/06 18:31:39 by mpeanuts          #+#    #+#             */
/*   Updated: 2022/02/07 20:13:33 by mpeanuts         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/stack.h"

t_stack	*create_stack(size_t size)
{
	t_stack	*new_stack;

	new_stack = (t_stack *)malloc(sizeof(t_stack));
	if (!new_stack)
		return (NULL);
	new_stack->array = (int *)malloc(sizeof(int) * size);
	if (!new_stack->array)
	{
		free(new_stack);
		return (NULL);
	}
	new_stack->top_id = -1;
	return (new_stack);
}

void	clear_stack(t_stack *stack)
{
	if (!stack)
		return ;
	if (stack->array)
		free(stack->array);
	free(stack);
}

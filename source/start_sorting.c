/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   start_sorting.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpeanuts <mpeanuts@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/28 21:28:31 by mpeanuts          #+#    #+#             */
/*   Updated: 2022/03/28 21:28:32 by mpeanuts         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	start_sorting(t_two_stacks *stacks)
{
	if (stacks->a->stack_size == 2)
		sort_two(stacks);
	else if (stacks->a->stack_size == 3)
		sort_three(stacks);
	else if (stacks->a->stack_size == 5)
		sort_five(stacks);
	else if (stacks->a->stack_size <= 100)
		big_sort(stacks, 15);
	else
		big_sort(stacks, 30);
}
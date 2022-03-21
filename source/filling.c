/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   filling.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpeanuts <mpeanuts@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/07 19:58:03 by mpeanuts          #+#    #+#             */
/*   Updated: 2022/03/21 20:27:21 by mpeanuts         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

static int	*atoi_to_all(int argc, char **argv)
{
	int		*nums;
	int		i;

	i = 0;
	nums = (int *)malloc(sizeof(int) * (argc - 1));
	if (!nums)
		return (NULL);
	while (i < argc - 1)
	{
		nums[i] = ft_atoi(argv[i + 1]);
		++i;
	}
	return (nums);
}

static void	fill_order(t_two_stacks *stacks)
{
	t_stack_elem	*tmp;
	int				i;

	tmp = stacks->a->top;
	// i = stacks->arr_size;
	while(tmp)
	{
		i = 0;
		while (i < stacks->arr_size)
		{
			if (tmp->data == stacks->sorted_array[i])
			{
				tmp->order = i + 1;
				break ;
			}
			++i;
		}
		tmp = tmp->next;
	}
}

void	filling_stack(t_two_stacks *stacks, int argc, char **argv)
{
	int	size;
	int	*nums;

	if (!are_numbers(argc, argv))
		fail_exit(stacks->a, stacks->b);
	nums = atoi_to_all(argc, argv);
	if (!nums)
		fail_exit(stacks->a, stacks->b);

	size = argc - 1;
	if (!are_unique(size, nums))
		fail_exit(stacks->a, stacks->b);
	if (is_sorted(size, nums))
		success_exit(stacks->a, stacks->b);
	stacks->arr_size = size;
	--size;
	while (size >= 0)
	{
		push_value(stacks->a, nums[size]);
		--size;
	}
	stacks->sorted_array = nums;
	quick_sort(stacks->sorted_array, 0, stacks->arr_size - 1);
	fill_order(stacks);
}

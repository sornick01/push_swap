/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   filling_bonus.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpeanuts <mpeanuts@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/07 19:58:03 by mpeanuts          #+#    #+#             */
/*   Updated: 2022/03/29 19:00:01 by mpeanuts         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../bonus_includes/push_swap_bonus.h"

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
	while (tmp)
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
		fail_exit(stacks);
	nums = atoi_to_all(argc, argv);
	if (!nums)
		fail_exit(stacks);
	size = argc - 1;
	if (!are_unique(size, nums))
		fail_exit(stacks);
	stacks->arr_size = size;
	--size;
	while (size >= 0)
	{
		push_value(stacks->a, nums[size]);
		--size;
	}
	free(nums);
}

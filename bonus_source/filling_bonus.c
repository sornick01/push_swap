/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   filling_bonus.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpeanuts <mpeanuts@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/07 19:58:03 by mpeanuts          #+#    #+#             */
/*   Updated: 2022/03/29 19:22:32 by mpeanuts         ###   ########.fr       */
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

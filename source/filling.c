/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   filling.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpeanuts <mpeanuts@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/07 19:58:03 by mpeanuts          #+#    #+#             */
/*   Updated: 2022/03/19 19:49:12 by mpeanuts         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	*atoi_to_all(int argc, char **argv)
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

void	filling_stack(t_stack *a, t_stack *b, int argc, char **argv)
{
	int	size;
	int	*nums;

	if (!are_numbers(argc, argv))
		fail_exit(a, b);
	nums = atoi_to_all(argc, argv);
	if (!nums)
		fail_exit(a, b);

	size = argc - 1;
	if (!are_unique(size, nums))
		fail_exit(a, b);
	if (is_sorted(size, nums))
		success_exit(a, b);

	--size;
	while (size >= 0)
	{
		push_value(a, nums[size]);
		--size;
	}

	free(nums);	
}

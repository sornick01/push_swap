/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpeanuts <mpeanuts@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 16:10:52 by mpeanuts          #+#    #+#             */
/*   Updated: 2022/03/29 17:36:47 by mpeanuts         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../bonus_includes/push_swap_bonus.h"

int	check_overflow(char *num)
{
	int		sign;
	size_t	len_of_num;

	sign = 1;
	if (num[0] == '-')
	{
		++num;
		sign = -1;
	}
	len_of_num = ft_strlen(num);
	if (len_of_num < 10)
		return (1);
	if (sign == -1 && (len_of_num > 10
			|| ft_strncmp(num, "2147483648", 10) > 0))
	{
		return (0);
	}
	if (sign == 1 && (len_of_num > 10 || ft_strncmp(num, "2147483647", 10) > 0))
	{
		return (0);
	}
	return (1);
}

int	are_numbers(int argc, char **argv)
{	
	int	i;
	int	j;

	i = 1;
	while (i < argc)
	{
		j = 0;
		if (argv[i][j] == '-')
			++j;
		else if (argv[i][j] == '+')
			++j;
		while (argv[i][j] != '\0')
		{
			if (!ft_isdigit(argv[i][j]))
				return (0);
			++j;
		}
		if (!check_overflow(argv[i]))
			return (0);
		++i;
	}
	return (1);
}

int	are_unique(int size, int *nums)
{
	int	i;
	int	j;

	i = 0;
	while (i < size)
	{
		j = i + 1;
		while (j < size)
		{
			if (nums[i] == nums[j])
			{
				free(nums);
				return (0);
			}
			++j;
		}
		++i;
	}
	return (1);
}

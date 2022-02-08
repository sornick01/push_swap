/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   filling.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpeanuts <mpeanuts@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/07 19:58:03 by mpeanuts          #+#    #+#             */
/*   Updated: 2022/02/08 19:26:29 by mpeanuts         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

static int	check_overflow(char *num)
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

static int	are_numbers(int argc, char **argv)
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

static int	are_unique(int argc, char **argv)
{
	int	i;
	int	j;
	int	num;
	int	next_num;

	i = 1;
	while (i < argc - 1)
	{
		num = ft_atoi(argv[i]);
		j = i + 1;
		while (j < argc)
		{
			next_num = ft_atoi(argv[j]);
			if (num == next_num)
				return (0);
			++j;
		}
		++i;
	}
	return (1);
}

static int	is_sorted(int argc, char **argv)
{
	int		*nums;
	size_t	i;

	nums = (int *)malloc(sizeof(int) * (argc - 1));
	i = 1;
	while ((int)i < argc)
	{
		nums[i - 1] = ft_atoi(argv[i]);
		++i;
	}
	i = 0;
	while ((int)i < argc - 2)
	{
		if (nums[i] > nums[i + 1])
		{
			free(nums);
			return (0);
		}
		++i;
	}
	free(nums);
	return (1);
}

void	filling_stack(t_stack *a, t_stack *b, int argc, char **argv)
{
	size_t	i;
	int		*nums;
	
	if (!are_numbers(argc, argv))
		fail_exit(a, b);
	nums = (int *)malloc(sizeof(int) * (argc - 1));
	if (!are_unique(argc, argv))
		fail_exit(a, b);
	if (is_sorted(argc, argv))
		success_exit(a, b);
	i = argc - 1;
	while (i > 0)
	{
		push(a, ft_atoi(argv[i]));
		i--;
	}
}

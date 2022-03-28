/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpeanuts <mpeanuts@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/28 21:27:47 by mpeanuts          #+#    #+#             */
/*   Updated: 2022/03/28 21:27:48 by mpeanuts         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

static int	is_space(int c)
{
	if (c == '\t' || c == ' ' || c == '\r'
		|| c == '\n' || c == '\f' || c == '\v')
		return (1);
	return (0);
}

int	ft_atoi(const char *str)
{
	long long		res;
	int				sign;

	res = 0;
	sign = 1;
	while (is_space(*str))
		str++;
	if (*str == '-')
	{
		sign *= -1;
		str++;
	}
	else if (*str == '+')
		str++;
	while (ft_isdigit(*str))
	{
		res = res * 10 + (*str++ - '0');
		if (res < 0)
		{
			if (sign == -1)
				return (0);
			return (-1);
		}
	}
	return ((int)(res * sign));
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   quick_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpeanuts <mpeanuts@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/28 21:28:23 by mpeanuts          #+#    #+#             */
/*   Updated: 2022/03/28 21:49:52 by mpeanuts         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

static void	swap(int *a, int *b)
{
	int	tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

static int	partition(int *arr, int left, int right)
{
	int	mid;
	int	i;
	int	j;

	mid = arr[(left + right) / 2];
	i = left;
	j = right;
	while (i <= j)
	{
		while (arr[i] < mid)
		{
			++i;
		}
		while (arr[j] > mid)
		{
			--j;
		}
		if (i >= j)
			break;
		swap(&arr[i++], &arr[j--]);
	}
	return j;
}

void	quick_sort(int *arr, int left, int right)
{
	int	q;

	if (left < right)
	{
		q = partition(arr, left, right);
		quick_sort(arr, left, q);
		quick_sort(arr, q + 1, right);
	}
}
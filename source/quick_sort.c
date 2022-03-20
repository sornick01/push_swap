#include "../includes/push_swap.h"

static void	swap(int *a, int *b)
{
	int tmp = *a;
	*a = *b;
	*b = tmp;
}

static int	partition(int *arr, int left, int right)
{
	int mid = (left + right) / 2;
	int i = left;
	int j = right;
	while (i <= j)
	{
		while (arr[i] < arr[mid])
		{
			++i;
		}
		while (arr[j] > arr[mid])
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
	int q;

	if (left < right)
	{
		q = partition(arr, left, right);
		quick_sort(arr, left, q);
		quick_sort(arr, q + 1, right);
	}
}
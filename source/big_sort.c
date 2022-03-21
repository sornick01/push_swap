#include "../includes/push_swap.h"

int	upper_than_middle(t_stack *stack, int size, int order)
{
	int				i;
	t_stack_elem	*tmp;

	i = 0;
	tmp = stack->top;
	if (tmp)
	{
		while (tmp && tmp->order != order)
		{
			tmp = tmp->next;
			++i;
		}
	}
	if (i >= size / 2)
		return (1);
	else
		return (0);
}

int	maximum(t_stack *stack)
{
	int				max;
	t_stack_elem	*tmp;

	tmp = stack->top;
	max = tmp->order;
	while (tmp)
	{
		if (tmp->order > max)
			max = tmp->order;
		tmp = tmp->next;
	}
	return (max);
}

void	start_sorting(t_two_stacks *stacks)
{
	if (stacks->a->stack_size <= 100)
		big_sort(stacks, 15);
	else
		big_sort(stacks, 30);
}

void	big_sort(t_two_stacks *stacks, int var)
{
	int counter;

	counter = 0;
	while (stacks->a->top)
	{
		if (counter > 1 && stacks->a->top->order <= counter)
		{
			push_b(stacks);
			rotate_b(stacks);
			++counter;
		}
		else if (stacks->a->top->order <= (counter + var))
		{
			push_b(stacks);
			++counter;
		}
		else if (stacks->a->top->order >= counter)
			rotate_a(stacks);
	}
	big_sort_back(stacks);
}

void	big_sort_back(t_two_stacks *stacks)
{
	int max;
	int check;

	while (stacks->b->stack_size)
	{
		max = maximum(stacks->b);
		check = upper_than_middle(stacks->b, stacks->b->stack_size, max);
		while (stacks->b->top->order != max)
		{
			if (!check)
				rotate_b(stacks);
			else
			reverse_rotate_b(stacks);
		}
		push_a(stacks);
	}
}
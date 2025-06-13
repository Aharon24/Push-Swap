/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_norm.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahapetro <ahapetro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/10 18:06:06 by ahapetro          #+#    #+#             */
/*   Updated: 2025/06/11 19:42:09 by ahapetro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_norm(t_s **a)
{
	int	*arr;
	int	size;
	t_s	*tmp;
	int	i;

	tmp = *a;
	arr = NULL;
	size = ft_list_len(*a);
	arr = ft_fill(*a, size, arr);
	ft_sort_bubble(arr, size);
	while (tmp)
	{
		i = 0;
		while (i < size)
		{
			if (arr[i] == tmp->data)
			{
				tmp->data = i;
				break ;
			}
			i++;
		}
		tmp = tmp->next;
	}
	free(arr);
}

int	*ft_fill(t_s *a, int size, int *arr)
{
	int	i;

	i = 0;
	arr = malloc(size * sizeof(int));
	if (!arr)
		return (NULL);
	while (a)
	{
		arr[i] = a->data;
		a = a->next;
		i++;
	}
	return (arr);
}

void	ft_sort_bubble(int *arr, int size)
{
	int	i;
	int	j;
	int	tmp;

	tmp = 0;
	i = 0;
	while (i < size - 1)
	{
		j = 0;
		while (j < size - i -1)
		{
			if (arr[j] > arr[j + 1])
			{
				tmp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = tmp;
			}
			j++;
		}
		i++;
	}
}

void	ft_butterfly(t_s **a, t_s **b)
{
	int	n;

	n = ft_sqrt(ft_list_len(*a));
	ft_a_to_b(a, b, n);
	while (*b)
	{
		max_to_top(b);
		pa(a, b);
	}
}

void	ft_a_to_b(t_s **a, t_s **b, int n)
{
	int	count;

	count = 0;
	while (*a)
	{
		if ((*a)->data <= count)
		{
			pb(a, b);
			rb(b);
			count++;
		}
		else if ((*a)->data <= count + n)
		{
			pb(a, b);
			count++;
		}
		else
			ra(a);
	}
}

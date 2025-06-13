/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahapetro <ahapetro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/09 18:31:47 by ahapetro          #+#    #+#             */
/*   Updated: 2025/06/11 19:44:25 by ahapetro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_sort_3(t_s **a)
{
	int	first;
	int	second;
	int	threed;

	first = (*a)->data;
	second = (*a)->next->data;
	threed = (*a)->next->next->data;
	if (first > second && second < threed && first < threed)
		sa(a);
	else if (first > second && second > threed)
	{
		sa(a);
		rra(a);
	}
	else if (first > second && second < threed && first > threed)
		ra(a);
	else if (first < second && second > threed && first < threed)
	{
		sa(a);
		ra(a);
	}
	else if (first < second && second > threed && first > threed)
		rra(a);
}

void	ft_sort_4(t_s **a, t_s **b)
{
	int	index;

	index = ft_find_index_min(*a);
	if (index == 1)
		sa(a);
	else if (index == 2)
	{
		rra(a);
		rra(a);
	}
	else if (index == 3)
		rra(a);
	pb(a, b);
	ft_sort_3(a);
	pa(a, b);
}

void	ft_sort_5(t_s **a, t_s **b)
{
	ft_push_min(a, b);
	ft_sort_4(a, b);
	pa(a, b);
}

int	ft_find_index_min(t_s *a)
{
	int	min;
	int	i;
	int	index;

	i = 0;
	index = 0;
	min = 2147483647;
	while (a)
	{
		if (a->data < min)
		{
			min = a->data;
			index = i;
		}
		a = a->next;
		i++;
	}
	return (index);
}

void	ft_push_min(t_s **a, t_s**b)
{
	int	index;

	index = ft_find_index_min(*a);
	if (index == 1)
		sa(a);
	else if (index == 2)
	{
		ra(a);
		ra(a);
	}
	else if (index == 3)
	{
		rra(a);
		rra(a);
	}
	else if (index == 4)
		rra(a);
	pb(a, b);
}

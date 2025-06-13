/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_function3.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahapetro <ahapetro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/09 18:24:37 by ahapetro          #+#    #+#             */
/*   Updated: 2025/06/10 20:01:18 by ahapetro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rrr(t_s **a, t_s **b)
{
	t_s	*last;
	t_s	*tmp;

	if (!a || !*a || !b || !*b || !(*a)->next || !(*b)->next)
		return ;
	tmp = NULL;
	last = *a;
	while (last->next)
	{
		tmp = last;
		last = last->next;
	}
	tmp->next = NULL;
	last->next = *a;
	*a = last;
	last = *b;
	while (last->next->next)
		last = last->next;
	tmp = last->next;
	last->next = NULL;
	tmp->next = *b;
	*b = tmp;
	ft_printf("rrr\n");
}

int	ft_sqrt(int size)
{
	int	i;
	int	n;

	i = 0;
	while (i <= size / 2)
	{
		if (i * i <= size)
			n = i;
		i++;
	}
	return (n);
}

int	ft_max(t_s *b)
{
	int	max;
	int	i;

	i = 0;
	max = -2147483648;
	while (b)
	{
		if (b->data > max)
		{
			max = b->data;
		}
		b = b->next;
		i++;
	}
	return (max);
}

int	ft_max_index(t_s *b)
{
	int	max;
	int	i;
	int	index;

	i = 0;
	index = 0;
	max = -2147483648;
	while (b)
	{
		if (b->data > max)
		{
			max = b->data;
			index = i;
		}
		b = b->next;
		i++;
	}
	return (index);
}

void	max_to_top(t_s **b)
{
	int	max;
	int	index;
	int	size;

	size = ft_list_len(*b);
	index = ft_max_index(*b);
	max = ft_max(*b);
	while ((*b)->data != max)
	{
		if (index <= size / 2)
			rb(b);
		else
			rrb(b);
	}
}

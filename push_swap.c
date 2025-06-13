/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahapetro <ahapetro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/09 17:29:28 by ahapetro          #+#    #+#             */
/*   Updated: 2025/06/11 22:26:14 by ahapetro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_push_swap(t_s **a)
{
	t_s	*b;

	b = NULL;
	if (ft_chek_push_swap(a) == 0)
		return ;
	if (ft_list_len(*a) == 1)
		return ;
	else if (ft_list_len(*a) == 2)
	{
		if ((*a)->data > (*a)->next->data)
			sa(a);
	}
	else if (ft_list_len(*a) == 3)
		ft_sort_3(a);
	else if (ft_list_len(*a) == 4)
		ft_sort_4(a, &b);
	else if (ft_list_len(*a) == 5)
		ft_sort_5(a, &b);
	else
	{
		ft_norm(a);
		ft_butterfly(a, &b);
	}
}

int	ft_chek_push_swap(t_s **a)
{
	t_s	*start;
	int	i;

	i = 0;
	start = *a;
	while (start->next)
	{
		if (start->data > start->next->data)
		{
			i++;
			return (i);
		}
		start = start->next;
	}
	return (i);
}

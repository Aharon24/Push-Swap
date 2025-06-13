/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_function.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahapetro <ahapetro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/09 17:33:20 by ahapetro          #+#    #+#             */
/*   Updated: 2025/06/10 20:34:22 by ahapetro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sa(t_s **a)
{
	int	number;

	number = 0;
	if (!a || !*a || !(*a)->next)
		return ;
	number = (*a)->data;
	(*a)->data = (*a)->next->data;
	(*a)->next->data = number;
	ft_printf("sa\n");
}

void	sb(t_s **b)
{
	int	number;

	number = 0;
	if (!b || !*b || !(*b)->next)
		return ;
	number = (*b)->data;
	(*b)->data = (*b)->next->data;
	(*b)->next->data = number;
	ft_printf("sb\n");
}

void	ss(t_s **a, t_s **b)
{
	int	number;

	number = 0;
	if (!a || !*a || !b || !*b || !(*a)->next || !(*b)->next)
		return ;
	number = (*a)->data;
	(*a)->data = (*a)->next->data;
	(*a)->next->data = number;
	number = 0;
	number = (*b)->data;
	(*b)->data = (*b)->next->data;
	(*b)->next->data = number;
	ft_printf("ss\n");
}

void	pa(t_s **a, t_s **b)
{
	t_s	*temb;

	if (!*b || !b)
		return ;
	temb = *b;
	*b = (*b)->next;
	temb->next = *a;
	*a = temb;
	ft_printf("pa\n");
}

void	pb(t_s **a, t_s **b)
{
	t_s	*temb;

	if (!a || !*a)
		return ;
	temb = *a;
	*a = (*a)->next;
	temb->next = *b;
	*b = temb;
	ft_printf("pb\n");
}

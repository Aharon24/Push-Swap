/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_function2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahapetro <ahapetro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/09 17:56:47 by ahapetro          #+#    #+#             */
/*   Updated: 2025/06/10 21:16:02 by ahapetro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ra(t_s **a)
{
	t_s	*first;
	t_s	*last;

	if (!a || !*a || !(*a)->next)
		return ;
	first = *a;
	*a = (*a)->next;
	first->next = NULL;
	last = *a;
	while (last->next)
		last = last->next;
	last->next = first;
	ft_printf("ra\n");
}

void	rb(t_s **b)
{
	t_s	*first;
	t_s	*last;

	if (!b || !*b || !(*b)->next)
		return ;
	first = *b;
	*b = (*b)->next;
	first->next = NULL;
	last = *b;
	while (last->next)
		last = last->next;
	last->next = first;
	ft_printf("rb\n");
}

// void	rb(t_s **b)
// {
// 	t_s	*tmp;
// 	t_s	*start;

// 	if (!b || !*b || !(*b)->next)
// 		return ;
// 	tmp = (*b);
// 	start = (*b)->next;
// 	while(tmp->next)
// 	{
// 		tmp = tmp->next;
// 	}
// 	tmp->next = *b;
// 	(*b)->next = NULL;
// 	(*b) = start;
// }

void	rr(t_s **a, t_s **b)
{
	t_s	*first;
	t_s	*last;

	if (!a || !*a || !b || !*b || !(*a)->next || !(*b)->next)
		return ;
	first = *a;
	*a = (*a)->next;
	first->next = NULL;
	last = *a;
	while (last->next)
		last = last->next;
	last->next = first;
	first = *b;
	*b = (*b)->next;
	first->next = NULL;
	last = *b;
	while (last->next)
		last = last->next;
	last->next = first;
	ft_printf("rr\n");
}

void	rra(t_s **a)
{
	t_s	*last;
	t_s	*tmp;

	if (!a ||!*a || !(*a)->next)
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
	ft_printf("rra\n");
}

void	rrb(t_s **b)
{
	t_s	*last;
	t_s	*tmp;

	if (!b || !*b || !(*b)->next)
		return ;
	last = *b;
	while (last->next->next)
		last = last->next;
	tmp = last->next;
	last->next = NULL;
	tmp->next = *b;
	*b = tmp;
	ft_printf("rrb\n");
}

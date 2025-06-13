/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahapetro <ahapetro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/08 16:08:07 by ahapetro          #+#    #+#             */
/*   Updated: 2025/06/13 17:13:08 by ahapetro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_s	*ft_new_list(int data)
{
	t_s	*new_node;

	new_node = (t_s *)malloc(sizeof(t_s));
	if (!new_node)
		return (NULL);
	new_node->data = data;
	new_node->next = NULL;
	return (new_node);
}

void	ft_printf_list(t_s *n)
{
	t_s	*temp;

	temp = n;
	while (temp)
	{
		ft_printf("%d -> ", temp->data);
		temp = temp->next;
	}
	ft_printf("NULL\n");
}

t_s	*ft_add_list(char **arr, t_s *p, t_arr *srr)
{
	int		i;
	t_s		*run;
	t_s		*kub;

	run = p;
	i = 0;
	if (p == NULL)
	{
		p = ft_new_list(ft_atoi(arr[i], srr));
		run = p;
		i++;
	}
	while (run->next)
		run = run->next;
	while (arr[i])
	{
		kub = ft_new_list(ft_atoi(arr[i], srr));
		if (srr->check == 1)
			return (NULL);
		run->next = kub;
		run = run->next;
		i++;
	}
	return (p);
}

int	ft_list_len(t_s *n)
{
	int	i;

	i = 0;
	while (n)
	{
		i++;
		n = n->next;
	}
	return (i);
}

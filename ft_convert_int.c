/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_int.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahapetro <ahapetro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/08 18:00:17 by ahapetro          #+#    #+#             */
/*   Updated: 2025/06/11 19:40:35 by ahapetro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_s	*ft_convert(char **arr, t_s *n)
{
	int		i;
	t_s		*p;
	t_s		*p1;
	t_arr	srr;

	p = NULL;
	i = 0;
	if (arr == NULL || ft_check_signed(arr) == 0)
		return (NULL);
	if (!p)
		p = ft_new_list (ft_atoi(arr[i], &srr));
	if (srr.check == 1)
		return (NULL);
	i++;
	n = p;
	while (arr[i])
	{
		p1 = ft_new_list(ft_atoi(arr[i], &srr));
		if (srr.check == 1)
			return (NULL);
		p->next = p1;
		p = p->next;
		i++;
	}
	return (n);
}

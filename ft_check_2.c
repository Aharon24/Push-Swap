/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_2.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahapetro <ahapetro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/11 18:39:01 by ahapetro          #+#    #+#             */
/*   Updated: 2025/06/12 15:31:52 by ahapetro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_check_space(char **str)
{
	int	i;

	i = 0;
	while ((str[1][i] >= 9 && str[1][i] <= 13) || str[1][i] == 32)
		i++;
	if (str[1][i] == '\0')
		return (0);
	return (1);
}

int	ft_check_normal_number(char **str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (ft_str_normal_chek_2(str[i]) == 0)
			return (0);
		i++;
	}
	return (1);
}

int	ft_str_normal_chek_2(char *str)
{
	int	i;
	int	s;
	int	n;

	s = 0;
	n = 0;
	i = 0;
	while (str[i])
	{
		if (str[i] >= '0' && str[i] <= '9')
			n++;
		if ((str[i] == '-' || str[i] == '+') && i != 0)
			s++;
		if (n > 0 && s > 0)
			return (0);
		if ((str[i] == '-' || str[0] == '+') && str[1] == '\0')
			return (0);
		i++;
	}
	return (1);
}

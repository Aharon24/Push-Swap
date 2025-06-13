/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_number.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahapetro <ahapetro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/07 17:15:12 by ahapetro          #+#    #+#             */
/*   Updated: 2025/06/13 17:17:24 by ahapetro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_s	*ft_get_number(int argc, char **argv, char **arr, t_s *n)
{
	int	i;

	i = 0;
	if (argc == 2)
	{
		if (argv[1][0] == 0)
			return (NULL);
		if (ft_check_space(argv) == 0)
			return (NULL);
		arr = ft_split(argv[1], ' ');
		if (ft_check_normal_number(arr) == 0)
			return (NULL);
		n = ft_get_number_in_string(arr, n);
		if (n == NULL)
			return (NULL);
		return (n);
	}
	else if (argc > 2)
	{
		n = ft_argv_get_number(argv, n);
		if (n == NULL)
			return (NULL);
	}
	return (n);
}

t_s	*ft_get_number_in_string(char **arr, t_s *n)
{
	int	i;

	i = 0;
	if (ft_check_signed(arr) == 0)
		return (NULL);
	n = ft_convert(arr, n);
	ft_free(arr);
	if (n == NULL)
		return (NULL);
	else
		return (n);
}

t_s	*ft_argv_get_number(char **argv, t_s *n)
{
	int		index ;
	char	**arr_red;
	t_arr	srr;
	t_s		*p;

	p = NULL;
	srr.check = 0;
	index = 1;
	while (argv[index])
	{
		if (ft_check_signed(&argv[index]) == 0)
			return (NULL);
		arr_red = ft_split(argv[index], ' ');
		if (ft_check_normal_number(arr_red) == 0)
			return (NULL);
		if (srr.check == 1)
			return (NULL);
		if (ft_strlen_arr(arr_red) == 0)
			return (NULL);
		p = ft_add_list(arr_red, p, &srr);
		ft_free(arr_red);
		index++;
	}
	n = p;
	return (p);
}

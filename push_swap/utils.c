/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yugurlu <yugurlu@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/12 17:56:17 by yugurlu           #+#    #+#             */
/*   Updated: 2022/12/13 11:11:22 by yugurlu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

bool	str_digit(t_list *data)
{
	int	i;
	int	j;

	i = 1;
	j = 0;
	while (data->av[i])
	{
		j = 0;
		while (data->av[i][j])
		{
			if (!(48 <= data->av[i][j] && data->av[i][j] <= 57))
				return (true);
			j++;
		}
		i++;
	}
	return (false);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yugurlu <yugurlu@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/12 17:56:17 by yugurlu           #+#    #+#             */
/*   Updated: 2022/12/12 18:14:46 by yugurlu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

bool	str_digit(t_list *data)
{
	int i = 1;
	int j = 0;
	while (data->av[i])
	{
		j = 0;
		while (data->av[i][j])
		{
			if ((65 <= data->av[i][j] && data->av[i][j] <= 90) || (97 <= data->av[i][j] && data->av[i][j] <= 122))
				return (true);
			j++;
		}
		i++;
	}
	return (false);
}

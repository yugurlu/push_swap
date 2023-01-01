/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils3.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yugurlu <yugurlu@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/25 14:33:46 by yugurlu           #+#    #+#             */
/*   Updated: 2023/01/01 13:40:03 by yugurlu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	free_split(t_list *data)
{
	int	i;

	i = 0;
	while (data->split[i])
		free(data->split[i++]);
	free(data->split);
}

void	back_fill_stack(t_list *data)
{
	int	i;

	i = 0;
	while (data->alen > i)
	{
		data->stacka[i] = data->fakesorted[i];
		i++;
	}
}

int	bit(t_list *data)
{
	int	i;
	int	x;

	i = 0;
	x = data->sorted_len - 1;
	while (x)
	{
		x >>= 1;
		i++;
	}
	return (i);
}

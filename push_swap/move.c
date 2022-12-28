/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   move.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yugurlu <yugurlu@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/20 12:05:50 by yugurlu           #+#    #+#             */
/*   Updated: 2022/12/21 18:03:26 by yugurlu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	up_move(int *arr, int len)
{
	int	i;

	i = 0;
	while (i < len)
	{
		arr[i] = arr[i + 1];
		i++;
	}
	arr[i] = 0;
}

void	down_move(t_list *data)
{
	int	i;
	int	temp;
	int	*newarr;

	i = 1;
	temp = data->stacka[data->alen - 1];
	newarr = malloc(sizeof(int) * data->alen + 1);
	while (i < data->alen)
	{
		newarr[i] = data->stacka[i - 1];
		i++;
	}
	newarr[i] = temp;
	free(data->stacka);
	data->stacka = newarr;
}

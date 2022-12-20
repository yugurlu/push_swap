/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils2.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yugurlu <yugurlu@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/16 14:18:24 by yugurlu           #+#    #+#             */
/*   Updated: 2022/12/20 18:15:53 by yugurlu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int find_index(int *arr, int value)
{
	int i;

	i = 0;
	while(arr[i] != value)
		i++;
	return (i);
}

void smart_rotate_a(t_list *data, int value)
{
	if(find_index(data->stacka,value) <= data->alen / 2)
		ra(data);
	else
		rra(data);
}

void find_small_pb(t_list *data, int numberidx)
{
	int i;

	i = 0;
	while (data->stacka[0] != data->fakesorted[numberidx])
		smart_rotate_a(data,data->fakesorted[numberidx]);
	pb(data);
}

void	radixidx(t_list *data)
{
	int i;

	i = 0;
	while (data->alen != i)
	{
		data->stacka[i] = find_index(data->fakesorted, data->stacka[i]);
		i++;
	}
}

void ft_free(t_list *data)
{
	free(data);
}

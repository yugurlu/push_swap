/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils2.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yugurlu <yugurlu@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/21 15:42:33 by yugurlu           #+#    #+#             */
/*   Updated: 2022/12/29 11:08:09 by yugurlu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	find_index(int *arr, int value)
{
	int	i;

	i = 0;
	while (arr[i] != value)
		i++;
	return (i);
}

void	smart_rotate_a(t_list *data, int value)
{
	if (find_index(data->stacka, value) <= data->alen / 2)
		ra(data);
	else
		rra(data);
}

void	find_small_pb(t_list *data, int numberidx)
{
	while (data->stacka[0] != data->fakesorted[numberidx])
		smart_rotate_a(data, data->fakesorted[numberidx]);
	pb(data);
}

void	radixidx(t_list *data)
{
	int	i;

	i = 0;
	while (data->alen != i)
	{
		data->stacka[i] = find_index(data->fakesorted, data->stacka[i]);
		i++;
	}
}

void	free_all(t_list *data)
{
	free(data->stacka);
	free(data->stackb);
	free(data->fakesorted);
	free(data);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yugurlu <yugurlu@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/13 12:10:55 by yugurlu           #+#    #+#             */
/*   Updated: 2022/12/19 17:37:28 by yugurlu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	three_number(t_list *data)
{
	if (data->stacka[0] > data->stacka[1] && data->stacka[2] > data->stacka[1]
		&& data->stacka[2] > data->stacka[0])
		sa(data);
	else if (data->stacka[0] > data->stacka[1]
			&& data->stacka[0] > data->stacka[2]
			&& data->stacka[1] > data->stacka[2])
	{
		sa(data);
		rra(data);
	}
	else if (data->stacka[0] > data->stacka[1]
			&& data->stacka[0] > data->stacka[2]
			&& data->stacka[2] > data->stacka[1])
		ra(data);
	else if (data->stacka[1] > data->stacka[0]
			&& data->stacka[1] > data->stacka[2]
			&& data->stacka[2] > data->stacka[0])
	{
		sa(data);
		ra(data);
	}
	else if (data->stacka[1] > data->stacka[0]
			&& data->stacka[0] > data->stacka[2]
			&& data->stacka[1] > data->stacka[2])
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

void	number_sort(t_list *data)
{
	int numberidx;

	numberidx = 0;
	while(data->alen > 3)
	{
		find_small_pb(data, numberidx);
		numberidx++;
	}
	three_number(data);
	while(data->blen)
		pa(data);
}

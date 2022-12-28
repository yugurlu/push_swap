/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yugurlu <yugurlu@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/13 12:10:55 by yugurlu           #+#    #+#             */
/*   Updated: 2022/12/28 12:24:47 by yugurlu          ###   ########.fr       */
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
	else
		rra(data);
}

void	small_sort(t_list *data)
{
	int	numberidx;

	numberidx = 0;
	if (data->alen == 3)
	{
		three_number(data);
		return ;
	}
	while (data->alen >= 3)
	{
		find_small_pb(data, numberidx);
		numberidx++;
		if (data->alen == 3)
			three_number(data);
	}
	while (data->blen)
		pa(data);
}

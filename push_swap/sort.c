/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yugurlu <yugurlu@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/13 12:10:55 by yugurlu           #+#    #+#             */
/*   Updated: 2022/12/16 14:51:29 by yugurlu          ###   ########.fr       */
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

void	five_number(t_list *data)
{
	int number;
	int number2;

	number = data->fakesorted[0];
	number2 = data->fakesorted[1];

	while (data->stacka[0] != number)
		smart_rotate_a(data,number);
	pb(data);

	while (data->stacka[0] != number2){
		smart_rotate_a(data,number2);
	}
	pb(data);
	three_number(data);
	while(data->blen)
		pa(data);
}

void 	sort(t_list *data)
{
	int i;

	i = 0;
	
}

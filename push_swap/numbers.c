/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   numbers.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yugurlu <yugurlu@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/13 12:10:55 by yugurlu           #+#    #+#             */
/*   Updated: 2022/12/13 16:46:03 by yugurlu          ###   ########.fr       */
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
	pb(data);
	printf("%d\n", data->stackb[0]);
	pb(data);
	printf("%d\n", data->stackb[0]);
	printf("%d\n\n", data->stackb[1]);
	sa(data);
	printf("%d", data->stacka[0]);
	printf("%d", data->stacka[1]);
	printf("%d\n", data->stacka[2]);
	ra(data);
	printf("%d", data->stacka[0]);
	printf("%d", data->stacka[1]);
	printf("%d\n", data->stacka[2]);
	pa(data);
	printf("%d", data->stacka[0]);
	printf("%d", data->stacka[1]);
	printf("%d\n", data->stacka[2]);
	ra(data);
	printf("%d", data->stacka[0]);
	printf("%d", data->stacka[1]);
	printf("%d", data->stacka[2]);
	printf("%d\n", data->stacka[3]);
	pa(data);
	printf("%d", data->stacka[0]);
	printf("%d", data->stacka[1]);
	printf("%d", data->stacka[2]);
	printf("%d", data->stacka[3]);
	printf("%d", data->stacka[4]);
}

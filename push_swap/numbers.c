/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   numbers.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yugurlu <yugurlu@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/13 12:10:55 by yugurlu           #+#    #+#             */
/*   Updated: 2022/12/15 18:02:30 by yugurlu          ###   ########.fr       */
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
	number2 = number + 1;
	while()
	if(number < data->fakesorted[0])
		sa(data);
	else
	while(data->blen != 2)
		pb(data);
	if(data->stackb[0] < data->stackb[1])
		rb(data);
	three_number(data);
	while (data->blen != 0)
		pa(data);

	/*pb(data);
	pb(data);
	sa(data);
	ra(data);
	pa(data);
	ra(data);
	pa(data);
	pb(data);
	pb(data);*/
	printf("%d\n", data->blen);
	printf("%d\n", data->stackb[0]);
	printf("%d\n", data->stackb[1]);
	printf("%d", data->stacka[0]);
	printf("%d", data->stacka[1]);
	printf("%d", data->stacka[2]);
	printf("%d", data->stacka[3]);
	printf("%d", data->stacka[4]);

}

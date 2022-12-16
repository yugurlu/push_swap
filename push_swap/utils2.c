/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils2.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yugurlu <yugurlu@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/16 14:18:24 by yugurlu           #+#    #+#             */
/*   Updated: 2022/12/16 15:56:16 by yugurlu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int find_index(int *arr, int value)
{
	int i;

	i = 0;
	while(arr[i] != value)
		i++;
	return i;
}

void smart_rotate_a(t_list *data, int value)
{
	if(find_index(data->stacka,value) < data->alen / 2)
		ra(data);
	else
		rra(data);
}

void smart_rotate_b(t_list *data, int value)
{
	if(find_index(data->stackb,value) < data->blen / 2)
		rb(data);
	else
		rrb(data);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   radix.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yugurlu <yugurlu@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/20 14:04:49 by yugurlu           #+#    #+#             */
/*   Updated: 2022/12/21 18:11:35 by yugurlu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	radix(t_list *data)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	radixidx(data);
	while (i < bit(data))
	{
		j = 0;
		while (j < data->sorted_len)
		{
			if ((data->stacka[0] >> i) & 1)
				ra(data);
			else
				pb(data);
			j++;
		}
		while (data->blen)
			pa(data);
		i++;
	}
}

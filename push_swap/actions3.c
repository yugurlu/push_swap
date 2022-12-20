/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   actions3.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yugurlu <yugurlu@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/09 12:14:00 by yugurlu           #+#    #+#             */
/*   Updated: 2022/12/20 12:10:14 by yugurlu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rra(t_list *data)
{
	int	temp;

	if (data->alen > 1)
	{
		temp = data->stacka[data->alen - 1];
		assagi_tasi(data);
		data->stacka[0] = temp;
		if(data->actionflag)
			write(1, "rra\n", 4);
	}
}

void	rrb(t_list *data)
{
	int	temp;

	if (data->alen > 1)
	{
		temp = data->stackb[0];
		assagi_tasi(data);
		data->stackb[data->blen - 1] = temp;
		if(data->actionflag)
			write(1, "rrb\n", 4);
	}
}

void	rrr(t_list *data)
{
	data->actionflag = 0;
	rra(data);
	rrb(data);
	data->actionflag = 1;
	write(1, "rrr\n", 4);
}

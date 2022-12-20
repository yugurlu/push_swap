/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   actions2.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yugurlu <yugurlu@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/20 12:09:38 by yugurlu           #+#    #+#             */
/*   Updated: 2022/12/20 12:09:52 by yugurlu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ra(t_list *data)
{
	if (data->alen > 1)
	{
		int	temp;
		temp = data->stacka[0];
		yukari_tasi(data->stacka, data->alen);
		data->stacka[data->alen - 1] = temp;
		if(data->actionflag)
			write(1, "ra\n", 3);
	}
}

void	rb(t_list *data)
{
	if (data->alen > 1)
	{
		int	temp;
		temp = data->stackb[0];
		yukari_tasi(data->stackb, data->blen);
		data->stackb[data->blen - 1] = temp;
		if(data->actionflag)
			write(1, "rb\n", 3);
	}
}

void	rr(t_list *data)
{
	data->actionflag = 0;
	ra(data);
	rb(data);
	data->actionflag = 1;
	write(1, "rr\n", 3);
}

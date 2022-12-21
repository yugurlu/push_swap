/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   actions.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yugurlu <yugurlu@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/20 12:04:34 by yugurlu           #+#    #+#             */
/*   Updated: 2022/12/21 13:23:18 by yugurlu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sa(t_list *data)
{
	int	temp;

	if (data->alen > 1)
	{
		temp = data->stacka[0];
		data->stacka[0] = data->stacka[1];
		data->stacka[1] = temp;
		if (data->actionflag)
			write(1, "sa\n", 3);
	}
}

void	sb(t_list *data)
{
	int	temp;

	if (data->blen > 1)
	{
		temp = data->stackb[0];
		data->stackb[0] = data->stackb[1];
		data->stackb[1] = temp;
		write(1, "sb\n", 3);
	}
}

void	ss(t_list *data)
{
	data->actionflag = 0;
	sa(data);
	sb(data);
	data->actionflag = 1;
	write(1, "ss\n", 3);
}

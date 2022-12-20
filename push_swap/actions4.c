/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   actions3.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yugurlu <yugurlu@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/20 12:07:38 by yugurlu           #+#    #+#             */
/*   Updated: 2022/12/20 12:08:23 by yugurlu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	pa(t_list *data)
{
	int	i;
	int	y;
	int	*arr;

	y = 0;
	i = 1;
	if (data->alen)
	{
		data->alen++;
		arr = malloc(sizeof(int) * data->alen + 2);
		while (y < data->alen)
			arr[i++] = data->stacka[y++];
		arr[0] = data->stackb[0];
		yukari_tasi(data->stackb, data->blen);
		free(data->stacka);
		data->stacka = arr;
		data->blen--;
		write(1, "pa\n", 3);
	}
}

void	pb(t_list *data)
{
	int	i;
	int	y;
	int	*arr;

	y = 0;
	i = 1;
	if (data->alen)
	{
		data->blen++;
		arr = malloc(sizeof(int) * data->blen + 1);
		while (y < data->blen)
			arr[i++] = data->stackb[y++];
		arr[0] = data->stacka[0];
		free(data->stackb);
		data->stackb = arr;
		data->alen--;
		yukari_tasi(data->stacka, data->alen);
		write(1, "pb\n", 3);
	}
}

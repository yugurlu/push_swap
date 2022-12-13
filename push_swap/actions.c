/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   actions.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yugurlu <yugurlu@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/09 12:14:00 by yugurlu           #+#    #+#             */
/*   Updated: 2022/12/13 16:10:53 by yugurlu          ###   ########.fr       */
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
	sa(data);
	sb(data);
}

void	ra(t_list *data)
{
	int	temp;

	if (data->alen > 1)
	{
		temp = data->stacka[0];
		yukari_tasi(data->stacka, data->alen);
		data->stacka[data->alen - 1] = temp;
		write(1, "ra\n", 3);
	}
}

void	rb(t_list *data)
{
	int	temp;

	if (data->alen > 1)
	{
		temp = data->stackb[0];
		yukari_tasi(data->stackb, data->blen);
		data->stackb[data->blen - 1] = temp;
		write(1, "rb\n", 3);
	}
}

void	rr(t_list *data)
{
	ra(data);
	rb(data);
}

void	yukari_tasi(int *arr, int len)
{
	int	i;

	i = 0;
	while (i < len)
	{
		arr[i] = arr[i + 1];
		i++;
	}
	arr[i] = 0;
}

void	assagi_tasi(t_list *data)
{
	int	i;
	int	temp;
	int	*newarr;

	i = 1;
	temp = data->stacka[data->alen - 1];
	newarr = malloc(sizeof(int) * data->alen + 1);
	while (i < data->alen)
	{
		newarr[i] = data->stacka[i - 1];
		i++;
	}
	newarr[i] = temp;
	free(data->stacka);
	data->stacka = newarr;
}

void	rra(t_list *data)
{
	int	temp;

	if (data->alen > 1)
	{
		temp = data->stacka[data->alen - 1];
		assagi_tasi(data);
		data->stacka[0] = temp;
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
		write(1, "rrb\n", 4);
	}
}

void	rrr(t_list *data)
{
	rra(data);
	rrb(data);
}

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
		write(1, "pb\n", 3);
	}
}

void	pb(t_list *data)
{
	int	i;
	int	y;
	int	*arr;

	y = 0;
	i = 1;
	if (data->blen)
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

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   actions.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yugurlu <yugurlu@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/09 12:14:00 by yugurlu           #+#    #+#             */
/*   Updated: 2022/12/09 13:48:48 by yugurlu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void sa(t_list *data)
{
	if(data->alen > 1)
	{
		int temp;
		temp = data->stacka[0];
		data->stacka[0] = data->stacka[1];
		data->stacka[1] = temp;
		write(1, "sa\n", 3);
	}
}

void sb(t_list *data)
{
	if(data->blen > 1)
	{
		int temp;
		temp = data->stackb[0];
		data->stackb[0] = data->stackb[1];
		data->stackb[1] = temp;
		write(1, "sb\n", 3);
	}
}

void ss(t_list *data)
{
	sa(data);
	sb(data);
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

void ra(t_list *data)
{
	if(data->alen > 1)
	{
		int temp;
		temp = data->stacka[0];
		yukari_tasi(data->stacka, data->alen);
		data->stacka[data->alen - 1] = temp;
		write(1, "ra\n", 3);
	}
}

void rb(t_list *data)
{
	if(data->alen > 1)
	{
		int temp;
		temp = data->stackb[0];
		yukari_tasi(data->stackb, data->blen);
		data->stackb[data->blen - 1] = temp;
		write(1, "rb\n", 3);
	}
}

void rr(t_list *data)
{
	ra(data);
	rb(data);
}

void	assagi_tasi(int *arr, int len)
{
	int	i;

	i = 1;
	while (i - 1 < len)
	{
		arr[1] = arr[i - 1];
		i++;
	}
	arr[i] = 0;
}

void rra(t_list *data)
{
	if(data->alen > 1)
	{
		int temp;
		temp = data->stacka[0];
		assagi_tasi(data->stacka, data->alen);
		data->stacka[data->alen - 1] = temp;
		write(1, "rra\n", 4);
	}
}

void rrb(t_list *data)
{
	if(data->alen > 1)
	{
		int temp;
		temp = data->stackb[0];
		assagi_tasi(data->stackb, data->blen);
		data->stackb[data->blen - 1] = temp;
		write(1, "rrb\n", 4);
	}
}

void rrr(t_list *data)
{
	rra(data);
	rrb(data);
}

int *yeni_ekle_a(t_list *data)
{
	int i;
	int y;
	int *arr;

	y = 0;
	i = 1;
	data->alen++;
	arr = malloc(sizeof(int) * data->alen + 2);
	while (y < data->alen)
		arr[i++] = data->stacka[y++];
	arr[0] = data->stackb[0];
	write(1, "pa\n", 3);
	return (arr);
}

int *yeni_ekle_b(t_list *data)
{
	int i;
	int y;
	int *arr;

	y = 0;
	i = 1;
	data->blen++;
	arr = malloc(sizeof(int) * data->blen + 2);
	while (y < data->blen)
		arr[i++] = data->stackb[y++];
	arr[0] = data->stacka[0];
	write(1, "pb\n", 3);
	return (arr);
}

void pa(t_list *data)
{
	data->stacka = yeni_ekle_a(data);
}

void pb(t_list *data)
{
	data->stackb = yeni_ekle_b(data);
}

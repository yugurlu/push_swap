/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yugurlu <yugurlu@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/12 17:56:17 by yugurlu           #+#    #+#             */
/*   Updated: 2023/01/02 17:53:59 by yugurlu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

bool	find(int *arr, int number)
{
	int	i;

	i = 0;
	while (arr[i])
	{
		if ((int)arr[i] == number)
			return (false);
		i++;
	}
	return (true);
}

bool	str_digit(t_list *data)
{
	int		i;
	int		j;
	char	**str;

	i = 1;
	j = 0;
	while (data->av[i])
	{
		j = 0;
		str = ft_split(data->av[i], ' ');
		while (str[j])
		{
			if (is_it_number(str[j++]))
			{
				free_split(str);
				return (true);
			}
		}
		free_split(str);
		i++;
	}
	return (false);
}

void	fake_sort(t_list *data)
{
	int	i;
	int	j;
	int	small;

	i = 0;
	j = 0;
	while (data->alen != i)
		data->fakesorted[i++] = data->stacka[j++];
	i = 0;
	while (data->sorted_len != i)
	{
		j = 0;
		while (j < data->alen)
		{
			if (data->fakesorted[j] > data->fakesorted[i])
			{
				small = data->fakesorted[j];
				data->fakesorted[j] = data->fakesorted[i];
				data->fakesorted[i] = small;
			}
			j++;
		}
		i++;
	}
}

bool	a_is_sorted(t_list *data)
{
	int	i;

	i = 0;
	while (data->alen > i + 1)
	{
		if (data->stacka[i] > data->stacka[i + 1])
			return (true);
		i++;
	}
	return (false);
}

int	bit(t_list *data)
{
	int	i;
	int	x;

	i = 0;
	x = data->sorted_len - 1;
	while (x)
	{
		x >>= 1;
		i++;
	}
	return (i);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_and_creat.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yugurlu <yugurlu@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/09 13:45:09 by yugurlu           #+#    #+#             */
/*   Updated: 2022/12/27 13:33:46 by yugurlu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

bool	create(t_list *data)
{
	data->stacka = malloc(sizeof(int) * data->alen);
	data->stackb = malloc(sizeof(int) * data->alen);
	data->fakesorted = malloc(sizeof(int) * data->alen);
	data->actionflag = 1;
	stack(data);
	fake_sort(data);
	if (control(data))
		return (false);
	return (true);
}

bool	copy_control(t_list *data)
{
	int	i;
	int	j;
	int	number;

	i = 1;
	j = 1;
	number = data->stacka[0];
	while (data->alen > i)
	{
		while (data->alen > i)
		{
			if (number == data->stacka[i])
				return (true);
			i++;
		}
		number = data->stacka[j++];
		i = j;
	}
	return (false);
}

bool	control(t_list *data)
{
	if (copy_control(data))
		return (true);
	if (str_digit(data))
		return (true);
	if (max_min_int(data))
		return (true);
	return (false);
}

void	stack(t_list *data)
{
	int	i;
	int	j;
	int	k;

	i = 1;
	j = 0;
	k = 0;
	while (data->av[i])
	{
		j = 0;
		data->split = ft_split(data->av[i], ' ');
		while (data->split[j])
		{
			data->stacka[k++] = ft_atoi(data->split[j]);
			free(data->split[j]);
			j++;
		}
		free(data->split);
		i++;
	}
}

bool	check_and_creat(t_list *data)
{
	int	i;
	int	y;
	int	size;

	i = 1;
	y = 0;
	size = 0;
	while (data->av[i])
	{
		y = 0;
		data->split = ft_split(data->av[i], ' ');
		while (data->split[y++])
			size++;
		free_split(data);
		i++;
	}
	data->alen = size;
	data->sorted_len = size;
	data->blen = 0;
	if (!(create(data)))
	{
		write(2, "Error\n", 6);
		return (false);
	}
	return (true);
}

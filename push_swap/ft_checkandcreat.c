/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_checkandcreat.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yugurlu <yugurlu@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/09 13:45:09 by yugurlu           #+#    #+#             */
/*   Updated: 2022/12/09 18:29:31 by yugurlu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

bool str_digit(char *arr)
{
	int i = 0;
	while (arr[i])
	{
		if ((65 <= arr[i] && arr[i] <= 90) || (97 <= arr[i] && arr[i] <= 122))
			return (true);
		i++;
	}
	return (false);
}

bool copy_control(t_list *data)
{
	int i;
	char *number;

	i = 1;
	number = data->split[0];
	while(data->split[i])
	{
		printf("number = %s\n", number);
		printf("data = %s\n", data->split[i]);
		if(number == data->split[i])
		{
			printf("girdi");
			return(true);
		}
		number = data->split[i];
		i++;
	}
	return (false);
}

void create(t_list *data)
{
	data->stacka = malloc(sizeof(int) * data->alen + 1);
	data->stackb = malloc(sizeof(int) * data->alen + 1);
	data->sorted = malloc(sizeof(int) * data->alen + 1);
	copy_control(data);
}

int ft_checkandcreat(t_list *data)
{
	int i;
	int y;

	i = 1;
	y = 0;
	while (data->av[i])
	{
		y = 0;
		data->split = ft_split(data->av[i], ' ');
		while (data->split[y])
		{
			if(str_digit(data->split[y]))
			{
				write(1, "ERROR", 5);
				return(0);
			}
			y++;
		}
		free(data->split);
		i++;
	}
	data->alen = y;
	data->blen = 0;
	create(data);
	return(0);
}

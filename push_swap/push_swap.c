/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yugurlu <yugurlu@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/07 13:53:15 by yugurlu           #+#    #+#             */
/*   Updated: 2023/01/02 17:54:48 by yugurlu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdio.h>

int	main(int ac, char **av)
{
	t_list	*data;

	data = malloc(sizeof(t_list));
	if (ac > 1)
	{
		data->av = av;
		if (!check_and_creat(data))
		{
			free_all(data);
			return (1);
		}
		if (a_is_sorted(data) && data->alen <= 5)
			small_sort(data);
		else if (a_is_sorted(data))
			radix(data);
	}
	free_all(data);
	return (0);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yugurlu <yugurlu@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/07 13:53:15 by yugurlu           #+#    #+#             */
/*   Updated: 2022/12/13 12:24:19 by yugurlu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int ac, char **av)
{
	t_list	*data;

	if (ac > 1)
	{
		data = malloc(sizeof(t_list));
		data->av = av;
		check_and_creat(data);
		if (data->alen == 3)
			three_number(data);
		if (data->alen == 5)
			five_number(data);
	}
}

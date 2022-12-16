/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yugurlu <yugurlu@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/07 13:53:15 by yugurlu           #+#    #+#             */
/*   Updated: 2022/12/16 14:40:01 by yugurlu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int ac, char **av)
{
	if (ac > 1)
	{
		t_list	*data;
		data = malloc(sizeof(t_list));
		data->av = av;
		check_and_creat(data);
		if (data->alen == 3)
			three_number(data);
		else if (data->alen == 5)
			five_number(data);
		else
			sort(data);
	}
}

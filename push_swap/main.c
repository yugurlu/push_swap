/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yugurlu <yugurlu@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/07 13:53:15 by yugurlu           #+#    #+#             */
/*   Updated: 2022/12/20 18:16:37 by yugurlu          ###   ########.fr       */
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
		if (a_is_sorted(data) && data->alen <= 5)
			small_sort(data);
		else if(a_is_sorted(data))
			radix(data);
		ft_free(data);
	}
}

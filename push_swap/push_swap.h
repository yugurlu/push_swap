/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yugurlu <yugurlu@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/08 15:44:59 by yugurlu           #+#    #+#             */
/*   Updated: 2022/12/31 10:51:47 by yugurlu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdbool.h>
# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>

typedef struct s_list
{
	char	**av;
	char	**split;
	int		*stacka;
	int		*stackb;
	int		*fakesorted;
	int		bit;
	int		alen;
	int		blen;
	int		sorted_len;
	int		actionflag;
}			t_list;

void		sa(t_list *data);
void		sb(t_list *data);
void		ss(t_list *data);
void		ra(t_list *data);
void		rb(t_list *data);
void		rr(t_list *data);
void		pa(t_list *data);
void		pb(t_list *data);
void		rra(t_list *data);
void		rrb(t_list *data);
void		rrr(t_list *data);
int			bit(t_list *data);
void		radix(t_list *data);
void		stack(t_list *data);
void		free_all(t_list *data);
void		radixidx(t_list *data);
bool		str_digit(t_list *data);
void		fake_sort(t_list *data);
void		down_move(t_list *data);
void		free_split(t_list *data);
long		ft_atoi(const char *str);
void		small_sort(t_list *data);
bool		max_min_int(t_list *data);
bool		a_is_sorted(t_list *data);
void		three_number(t_list *data);
bool		copy_control(t_list *data);
void		up_move(int *arr, int len);
void		back_fill_stack(t_list *data);
bool		check_and_creat(t_list *data);
int			find_index(int *arr, int value);
char		**ft_split(char const *s, char c);
void		smart_rotate_a(t_list *data, int value);
void		find_small_pb(t_list *data, int numberidx);

#endif

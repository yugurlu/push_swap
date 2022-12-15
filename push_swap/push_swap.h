/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yugurlu <yugurlu@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/08 15:44:59 by yugurlu           #+#    #+#             */
/*   Updated: 2022/12/15 13:23:03 by yugurlu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdbool.h>
# include <stdio.h>
# include <stdlib.h>
# include <string.h>
# include <unistd.h>

typedef struct s_list
{
	char	**av;
	char	**split;
	int		*stacka;
	int		*stackb;
	int		*fakesorted;
	int		sorted_len;
	int		alen;
	int		blen;
	int		flag;
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
bool		control(t_list *data);
bool		str_digit(t_list *data);
void		fake_sort(t_list *data);
int			ft_atoi(const char *str);
void		five_number(t_list *data);
void		three_number(t_list *data);
int			*yeni_ekle_a(t_list *data);
int			*yeni_ekle_b(t_list *data);
void		stack_doldur(t_list *data);
void		check_and_creat(t_list *data);
void		yukari_tasi(int *arr, int len);
char		**ft_split(char const *s, char c);
#endif

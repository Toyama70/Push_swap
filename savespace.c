/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   savespace.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybestrio <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/18 16:02:24 by ybestrio          #+#    #+#             */
/*   Updated: 2021/12/18 16:13:42 by ybestrio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_1_2_3(int *i, int *smallest, int *a, int size)
{
	int	k;

	*smallest = a[0];
	*i = -1;
	k = 0;
	while (++(*i) < size)
	{
		if (a[*i] < (*smallest) && a[*i] != 0)
		{
			k = *i;
			*smallest = a[*i];
		}
	}
	return (k);
}

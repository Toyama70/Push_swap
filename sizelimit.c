/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sizelimit.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yasinbestrioui <marvin@42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/16 11:56:27 by yasinbest         #+#    #+#             */
/*   Updated: 2021/12/18 15:43:11 by ybestrio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "push_swap.h"

void	ft_size(int a[], int b[], int size)
{
	if (size <= 5)
		push_swap(a, b, size);
	if (size > 5)
		bigstack(a, b, size);
}

void	ft_check(int a[], int b[], int size)
{
	if (ft_doublon(a, b, size) == 1)
		exit(0);
	if (ft_is_sorted(a, size) == 0)
		exit(0);
}

void	ft_sendtotri(int acopy[], int bcopy[], int size)
{
	ft_pushmatrix(acopy, bcopy, 8, size);
	ft_trisolver(acopy, bcopy, size);
	ft_pushmatrix(acopy, bcopy, 7, size);
}

void	ft_gainspace(int acopy[], int bcopy[], int minpos, int size)
{
	while (minpos < size)
	{
		ft_reverse(acopy, bcopy, 3, size);
		minpos++;
	}
}

void	ft_no_arg(void)
{
	write(2, "Error\n", 6);
	exit(0);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bigswap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yasinbestrioui <marvin@42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/09 15:13:36 by yasinbest         #+#    #+#             */
/*   Updated: 2021/12/20 12:49:27 by ybestrio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "push_swap.h"

void	ft_binarray(int boxes[], int binary[], int size)
{
	int	i;

	i = 0;
	while (i < size)
	{
		binary[i] = convert_base2(boxes[i]);
		i++;
	}
}

void	radix(int a[], int b[], int size)
{
	int	i;
	int	div;

	div = 10;
	i = -1;
	while (div <= (convert_base2(size) * 10))
	{
		i = -1;
		while (++i < size)
		{
			if (a[0] % div < 1 * (div / 10))
				ft_pushmatrix(a, b, 8, size);
			else
				ft_rotmatrix(a, b, 3, size);
		}
		a = zerolast(a, size);
		while (b[0] != 0)
			ft_pushmatrix(a, b, 7, size);
		div *= 10;
		if (ft_is_sorted(a, size) == 0)
		{
			free(a);
			return ;
		}
	}
}

void	bigstack(int a[], int b[], int size)
{
	int	*boxes;
	int	*binary;

	binary = ft_malloc(sizeof(int) * size);
	boxes = ft_putboxes(a, b, size);
	if (size > 700)
	{
		above700(boxes, b, size);
		free(binary);
		return ;
	}
	ft_binarray(boxes, binary, size);
	radix(binary, b, size);
	free(boxes);
}

int	ft_findsmallest(int *a, int size)
{
	int	i;
	int	smallest;

	smallest = a[0];
	i = 0;
	while (i < size)
	{
		if (a[i] < smallest)
			smallest = a[i];
		i++;
	}
	return (smallest);
}

void	above700(int *a, int *b, int size)
{
	int	i;
	int	k;
	int	smallest;
	int	round;

	round = -1;
	while (++round < size)
	{
		a = zerolast(a, size);
		if (a[0] == 0)
			break ;
		k = ft_1_2_3(&i, &smallest, a, size);
		while (k-- > 0)
			ft_rotmatrix(a, b, 3, size);
		if (a[0] != 0)
			ft_pushmatrix(a, b, 8, size);
	}
	i = -1;
	while (++i < size)
		ft_pushmatrix(a, b, 7, size);
	free(a);
}

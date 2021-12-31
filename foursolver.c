/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   foursolver.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybestrio <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/07 13:18:06 by ybestrio          #+#    #+#             */
/*   Updated: 2021/12/18 17:00:48 by ybestrio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "push_swap.h"

int	ft_trisolver(int a[], int b[], int size)
{
	int	acopy[3];
	int	i;

	i = 0;
	while (i < 3)
	{
		acopy[i] = a[i];
		i++;
	}
	ft_whichmove(acopy, b, size);
	i = 0;
	while (i < 3)
	{
		a[i] = acopy[i];
		i++;
	}
	return (0);
}

int	ft_whichmove(int a[], int b[], int size)
{
	if (ft_is_sorted(a, 3) == 0)
		return (0);
	if (ft_calculation(a, b, 3) == 1)
		return (1);
	if (ft_cal2(a, b, 3) == 1)
		return (2);
	if (ft_try_swap_rot(a, b, 3) == 1)
		return (3);
	(void)(size);
	return (0);
}

int	ft_foursolver(int array1[], int array2[], int size)
{
	ft_4extract(array1, array2, size);
	return (1);
}

void	ft_4extract(int acopy[], int bcopy[], int size)
{
	int	minpos;
	int	minvalue;
	int	i;

	i = -1;
	minpos = 0;
	minvalue = acopy[0];
	while (++i < size - 1)
	{
		if (acopy[i + 1] < minvalue)
		{
			minpos = i + 1;
			minvalue = acopy[i + 1];
		}
	}
	if (minpos > (size / 2))
		while (minpos < size && ++minpos)
			ft_reverse(acopy, bcopy, 9, size);
	else
		while (minpos-- != 0)
			ft_rotmatrix(acopy, bcopy, 3, size);
	ft_pushmatrix(acopy, bcopy, 8, size);
	ft_trisolver(acopy, bcopy, size);
	ft_pushmatrix(acopy, bcopy, 7, size);
}

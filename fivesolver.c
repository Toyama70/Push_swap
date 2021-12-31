/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fivesolver.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybestrio <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/09 10:13:46 by ybestrio          #+#    #+#             */
/*   Updated: 2021/12/18 14:32:02 by ybestrio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "push_swap.h"

int	ft_fivesolver(int array1[], int array2[], int size)
{
	ft_5extract(array1, array2, size);
	return (0);
}

int	ft_foursolvercopy(int array1[], int array2[], int size)
{
	int	acopy[4];
	int	bcopy[4];
	int	i;

	i = 0;
	(void)(size);
	while (i < 4)
	{
		acopy[i] = array1[i];
		bcopy[i] = array2[i];
		i++;
	}
	ft_4extract(acopy, bcopy, 4);
	i = 0;
	while (i < 4)
	{
		array1[i] = acopy[i];
		array2[i] = bcopy[i];
		i++;
	}
	return (1);
}

void	ft_5extract(int acopy[], int bcopy[], int size)
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
	sendtofour(acopy, bcopy, size);
}

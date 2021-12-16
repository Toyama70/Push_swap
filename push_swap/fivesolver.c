/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fivesolver.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybestrio <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/09 10:13:46 by ybestrio          #+#    #+#             */
/*   Updated: 2021/12/16 13:00:32 by yasinbest        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "push_swap.h"

int ft_fivesolver(int array1[], int array2[], int size)
{
	ft_5extract(array1, array2, size);
return 0; //bricolage

}

int	ft_foursolvercopy(int array1[], int array2[], int size)
{
	int acopy[4];
	int bcopy[4];
	int i = 0;

	(void)(size);
	while (i < 4)
	{
		acopy[i] = array1[i];
		bcopy[i] = array2[i];
		i++;
	}
	ft_4extract(acopy, bcopy, 4);
	i = 0;
	while(i < 4)
	{
		array1[i] = acopy[i];
		array2[i] = bcopy[i];
		i++;

	}
	return 1;
}

void ft_5extract(int acopy[], int bcopy[], int size) //too long needs short
{
	int minpos;
	int minvalue;
	int i;

	i = -1;
	minpos = 0;
	minvalue = acopy[0];
	while (++i < size - 1)
		if (acopy[i + 1] < minvalue)
		{
			minpos = i + 1;
			minvalue = acopy[i + 1];
		}
	if (minpos > (size / 2))
		while(minpos < size)
		{
			ft_reverse(acopy, bcopy, 9, size);
			minpos++;
		}
	else
		while(minpos-- != 0)
			ft_rotmatrix(acopy, bcopy, 3, size); //it worked !
	ft_pushmatrix(acopy, bcopy, 8, size); // ft_multimove regroupe les 4
	ft_foursolvercopy(acopy, bcopy, 4);
	ft_trisolver(acopy, bcopy, 3);
	ft_pushmatrix(acopy, bcopy, 7, size);
}

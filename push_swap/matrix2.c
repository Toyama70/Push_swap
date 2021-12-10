/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   matrix2.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yasinbestrioui <marvin@42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/03 13:44:54 by yasinbest         #+#    #+#             */
/*   Updated: 2021/12/10 13:45:30 by yasinbest        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "push_swap.h"

int	ft_cal2(int array1[], int array2[], int size)
{
	int solution;

	solution = 0;
	if (ft_simpleswap(array1, size, &solution) == 1)
		{
			ft_swapmatrix(array1, array2, 1);
			return (1);
		}
	return 0;

}

void ft_pusher(int array1[], int array2[], int size)
{
	int i;

	i = 0;
	
	//exceptions (all 0 in stack 1)
	while (i < size && array1[i] == 0)
		i++;
	if (i == size)
		return;

	ft_revrot(array2, size);
	array2[0] = array1[0];
	array1[0] = 0;
	ft_rotate(array1, size);

}

void ft_fillzero(int array[], int size)
{
	int i;

	i = 0;
	while (i < size)
	{
		array[i] = 0;
		i++;
	}
	return ;
}

int ft_try_swap_rot(int array1[], int array2[], int size)//
{
	int solution;
	int alternate;

	solution = 0;
	alternate = 0;
	if (ft_swaprot(array1, size, &solution) != 0)
	{
		ft_swaprev(array1, size, &alternate);
		ft_swapmatrix(array1, array2, 1);
		if (solution <= alternate)
		{
			while (solution != 0)
			{
				ft_rotmatrix(array1, array2, 3, size);
				solution--;
			}
		}
		else
			while (alternate != 0)
			{
				ft_reverse(array1, array2, 9, size);
				alternate--;
			}
		return 1;
	}
	return 0;
}

int *zerolast(int a[] , int size)
{
	//scanner et si pas de 0 dans arrayA, return;
	int *temp;
	int i;
	int counter;

	i = 0;
	counter = 0;
	temp = malloc(sizeof(int) * size);
	while (i < size)
	{
		if (a[i] != 0)
		{
			temp[counter] = a[i];
			counter++;
		}
		i++;
	}
	while(counter < size)
	{
		temp[counter] = 0;
		counter++;
	}
	
	return (temp);
}

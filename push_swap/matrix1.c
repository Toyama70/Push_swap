/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   matrix1.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yasinbestrioui <marvin@42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/01 14:15:14 by yasinbest         #+#    #+#             */
/*   Updated: 2021/12/10 11:17:54 by yasinbest        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include "push_swap.h"

int ft_is_sorted(int array[], int size)
{
	int i;

	i = 0;
	while (i < size - 1)
	{
		if (array[i] > array[i + 1])
		{
			return 1;
		}
		i++;
	}
	return 0;
}

void ft_pushmatrix(int array1[], int array2[], int action, int size)//
{
	if (action == 7)
	{
		write(1, "pa\n", 3);
		ft_pusher(array2, array1, size);
	}
	if (action == 8)
	{
		write(1, "pb\n", 3);
		ft_pusher(array1, array2, size);
	}

}

void ft_revrot(int array[], int size)//
{
	int temp;
	int exchange[size];
	int i;

	i = 0;

	temp = array[size - 1]; //saves last
	while (i < size - 1)
	{
		exchange[i + 1] = array[i];
		i++;
	}
	i = 0;
	while (i < size)
	{
	array[i] = exchange[i];
		i++;
	}
	array[0] = temp;
}


void ft_reverse(int array1[], int array2[], int action, int size)
{
	if (action == 9 || action == 11)
	{
		ft_revrot(array1, size);
		if (action == 9)
			ft_putstrnl("rra");
	}
	if (action == 10 || action == 11)
	{
		ft_revrot(array2, size);
		if (action == 10)
			ft_putstrnl("rrb");
		else
		{
			ft_putstrnl("rrr");
			ft_revrot(array1, size);
			ft_revrot(array2, size);
		}
	}
}

int ft_calculation(int array1[], int array2[], int size)
{
	int solution;
	int alternate;	
	
	solution = 0;
	alternate = 0;
	if (ft_simplerot(array1, size, &solution) != 0) 
	{
		ft_simplerev(array1, size, &alternate);
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
	//is a swap enough ? dans une autre fonction;
	return 0; //no simplistic answer, switch to bigger calculate;
}

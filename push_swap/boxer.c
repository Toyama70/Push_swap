/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   boxer.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybestrio <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/06 12:57:29 by ybestrio          #+#    #+#             */
/*   Updated: 2021/12/13 19:43:09 by yasinbest        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "push_swap.h"



int *ft_putboxes2(int array1[], int array2[], int size)
{
	int *temp;
	int i;
	int k;
	int counter;

	temp = malloc(sizeof(int) * size);
	i = 0;

	while (i < size)
	{
		k = 0;
		counter = 1;
		while(k < size)
		{
			if (array1[i] > array1[k])
			{
				counter++;
			}
			temp[i] = counter;
			k++;
		}
		i++;
	}
(void)(array2); // bricolage
return (temp);

}



int *ft_putboxes(int array1[], int array2[], int size)
{
	int *temp;
	int i;
	int k;
	int counter;

	temp = malloc(sizeof(int) * size);
	i = 0;

	while (i < size)
	{
		k = 0;
		counter = 1;
		while(k < size)
		{
			if (array1[i] > array1[k])
			{
				counter++;
			}
			temp[i] = counter;
			k++;
		}
		i++;
	}
(void)(array2); // bricolage
return (temp);

}

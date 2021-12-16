/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bigswap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yasinbestrioui <marvin@42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/09 15:13:36 by yasinbest         #+#    #+#             */
/*   Updated: 2021/12/16 12:20:24 by yasinbest        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "push_swap.h"

int	convert_base2(int num)
{
	int	mul;
	int	place;
	int	ret;

	mul = 0;
	place = 1;
	ret = 0;
	while (num)
	{
		mul = num % 2;
		num = num / 2;
		ret = ret + (mul * place);
		place *= 10;
	}
	return (ret);
}

void ft_binarray(int boxes[], int binary[], int size)
{
	int i;

	i = 0;
	while (i < size)
	{
		binary[i] = convert_base2(boxes[i]);
		i++;
	}

}

//toadapt radix
void	radix(int a[], int b[], int size)
{
	int	i;
	int	div;

	int k; //todelete

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
		//inserer le tri de a
		k = 0;
		a = zerolast(a, size);
		i = 0;
		while (b[0] != 0)
		{
			ft_pushmatrix(a, b, 7, size);
		}
		div *= 10;
		if (ft_is_sorted(a, size) == 0)
		{
			free(a);
			return ;
		}
	}
}


void bigstack(int a[], int b[], int size)
{
	int *boxes;
	int *binary;

/*	if (size > 700)
	{
		above700(a, b, size);
		return;
	}*/
	binary = malloc(sizeof(int) * size);
	//boxes = malloc(sizeof(int) * size);
	boxes = ft_putboxes(a, b, size);
	if (size > 700)
	{
		above700(boxes, b, size);
		free(binary);
		return;
	}
	ft_binarray(boxes, binary, size);

	radix(binary, b, size);
//	free(binary);
	free(boxes);

}

int	ft_findsmallest(int *a, int size)
{
	int i;
	int smallest;

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
	int k;
	int count;
	int smallest;
	int round;

	round = 0;
	count = 0;
	while (round < size)
	{
		a = zerolast(a, size);
		if(a[0] == 0)
			break;
		smallest = a[0];
		i = 0;
		k = 0;
		count = 0;
		while (i < size)
		{
			if(a[i] < smallest && a[i] != 0)
			{
					k = i;
					smallest = a[i];
			}
			i++;
		}

		while(k > 0)
		{
			ft_rotmatrix(a,b, 3, size);
			k--;
		}
		if (a[0] != 0)
			ft_pushmatrix(a, b, 8, size);
		round++;
	}
	i = 0;
	while (i < size)
	{
		ft_pushmatrix(a, b, 7, size);
		i++;
	}
	free(a);
}

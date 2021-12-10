/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bigswap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yasinbestrioui <marvin@42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/09 15:13:36 by yasinbest         #+#    #+#             */
/*   Updated: 2021/12/10 14:01:26 by yasinbest        ###   ########.fr       */
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
	/*	while(k < size)
		{
			printf("prezerolast a[k] = %d\n", a[k]);
			k++;
		}
		k = 0;
		while(k < size)
		{
			printf("prezerolast b[k] = %d\n", b[k]);
			k++;
		}*/
		a = zerolast(a, size);
	/*	k = 0;
		while(k < size)
		{
			printf("postzerolast a[k] = %d\n", a[k]);
			k++;
		}
		k = 0;
		while(k < size)
		{
			printf("postzerolast b[k] = %d\n", b[k]);
			k++;
		}
	*/	
		i = 0;
		while (b[0] != 0)
			ft_pushmatrix(a, b, 7, size);
	/*	k = 0;
		while(k < size)
		{
			printf("find de round a[k] = %d\n", a[k]);
			k++;
		}
		k = 0;
		while(k < size)
		{
			printf("fin de round b[k] = %d\n", b[k]);
			k++;
		}
	*/	
		div *= 10;
		if (ft_is_sorted(a, size) == 0)
			return ;
	}
}


void bigstack(int a[], int b[], int size)
{
	int *boxes;
	int *binary;

	//verif rotations, verif reverse rot
	binary = malloc(sizeof(int) * size);
	boxes = malloc(sizeof(int) * size);
	boxes = ft_putboxes(a, b, size);
	ft_binarray(boxes, binary, size);

//	radix(binary, b, size); // demander a Mushu
/*	
	int i = -1;
	while(i++ < size - 1)
		printf("boxes[i] = %d\n", boxes[i]);
*/
	radix(binary, b, size);
/*
	int i = -1;
	while(i++ < size - 1)
		printf("binary[i] = %d\n", binary[i]);
*/
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bigswap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yasinbestrioui <marvin@42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/09 15:13:36 by yasinbest         #+#    #+#             */
/*   Updated: 2021/12/09 18:50:29 by yasinbest        ###   ########.fr       */
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

void bigstack(int a[], int b[], int size)
{
	int *boxes;
	int *binary;

	//verif rotations, verif reverse rot
	binary = malloc(sizeof(int) * size);
	boxes = malloc(sizeof(int) * size);
	boxes = ft_putboxes(a, b, size);
	ft_binarray(boxes, binary, size);

	radix(binary, size); // demander a Mushu

}

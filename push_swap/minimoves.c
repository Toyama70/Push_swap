/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minimoves.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yasinbestrioui <marvin@42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/02 14:42:45 by yasinbest         #+#    #+#             */
/*   Updated: 2021/12/09 11:06:04 by ybestrio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "push_swap.h"

int ft_simplerot(int array[], int size, int *solution)
{
	int temp[size];
	int i;

	i = 0;
	while (i < size)
	{
		temp[i] = array[i];
		i++;
	}
	i = 0;

	while (i <= size)
	{
		ft_rotate(temp, size);
		if(ft_is_sorted(temp, size) == 0)
		{
			*solution += (i + 1);
			return 1;
		}
		i++;	
	}
	return 0;
}

int ft_simplerev(int array[], int size, int *solution)
{
	int temp[size];
	int i;

	i = 0;
	while (i < size)
	{
		temp[i] = array[i];
		i++;
	}
	i = 0;

	while (i <= size)
	{
		ft_revrot(temp, size);
		if (ft_is_sorted(temp, size) == 0)
		{
			*solution += (i + 1);
			return 1;
		}
		i++;	
	}
	return 0;
}

int ft_simpleswap(int array[], int size, int *solution)
{
	int temp[size];
	int i;

	(void)(solution);//bricolage pour variable non utilisee
	i = 0;
	while (i < size)
	{
		temp[i] = array[i];
		i++;
	}
	i = 0;

	ft_swap(temp);
	if (ft_is_sorted(temp, size) == 0)
		return 1;

	return 0;
}

int ft_swaprot(int array[], int size, int *solution)
{
	int temp[size];
	int i;

	i = 0;
	while (i < size)
	{
		temp[i] = array[i];
		i++;
	}
	i = 0;
	ft_swap(temp);
	while (i <= size)
	{
		ft_rotate(temp, size);
		if (ft_is_sorted(temp, size) == 0)
		{
			*solution += (i + 1);
			return 1;
		}
		i++;	
	}
	return 0;
}

int ft_swaprev(int array[], int size, int *solution)
{
	int temp[size];
	int i;

	i = 0;
	while (i < size)
	{
		temp[i] = array[i];
		i++;
	}
	i = 0;
	ft_swap(temp);
	while (i <= size)
	{
		ft_revrot(temp, size);
		if (ft_is_sorted(temp, size) == 0)
		{
			*solution += (i + 1);
			return 1;
		}
		i++;	
	}
	return 0;
}

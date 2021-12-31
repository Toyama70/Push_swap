/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sizelimit2.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybestrio <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/18 14:08:12 by ybestrio          #+#    #+#             */
/*   Updated: 2021/12/20 12:53:10 by ybestrio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "push_swap.h"

void	doublesign(int argc, char **a)
{
	int	i;
	int	k;

	i = 1;
	while (i < argc)
	{
		k = 0;
		while (a[i][k] != 0)
		{
			if (a[i][k] > 57 || a[i][k] < 48)
			{
				if (a[i][k] != '+' && a[i][k] != '-' && a[i][k] != ' ')
				{
					write(2, "Error\n", 6);
					exit(0);
				}
			}
			k++;
		}
		i++;
	}
}

void	sendtofour(int acopy[], int bcopy[], int size)
{
	ft_pushmatrix(acopy, bcopy, 8, size);
	ft_foursolvercopy(acopy, bcopy, 4);
	ft_trisolver(acopy, bcopy, 3);
	ft_pushmatrix(acopy, bcopy, 7, size);
}

void	ft_putstrnl(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
	write(1, "\n", 1);
	return ;
}

void	ft_rotate(int array[], int size)
{
	int	temp;
	int	*exchange;
	int	i;

	i = 1;
	exchange = ft_malloc(sizeof(int) * size);
	temp = array[0];
	while (i < size)
	{
		exchange[i - 1] = array[i];
		i++;
	}
	i = 0;
	while (i < size)
	{
	array[i] = exchange[i];
		i++;
	}
	array[i - 1] = temp;
	free(exchange);
}

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

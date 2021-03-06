/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsestring.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yasinbestrioui <marvin@42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/12 10:27:14 by yasinbest         #+#    #+#             */
/*   Updated: 2021/12/15 10:45:20 by ybestrio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "push_swap.h"

void ft_parser(int *a[], int *b[],int *size, char **argv)
{
	char **toparse;
	int i;

	i = 0;
	toparse = ft_split(argv[1], ' ');
	while (toparse[i] != 0)
		i++;
	*size = i;
	*a = malloc(sizeof(int) * i);
	*b = malloc(sizeof(int) * i);
	i = 0;
	while (toparse[i] != 0)
	{
		(*a)[i] = ft_atoi(toparse[i]);
		i++;
	}
	i = 0;
	while (toparse[i])
	{
		free(toparse[i]);
		i++;
	}
	free(toparse);
}

int		ft_doublon(int *a, int *b, int size)
{
	int i;

	i = -1;
	while (++i < size)
		b[i] = a[i];
	if (ft_compare(a, b, size) == 1)
	{
		write(2, "Error\n", 6);
		return (1);
	}
	ft_fillzero(b, size);
	return (0);
}

int		ft_compare(int a[], int b[], int size)
{
	int i;
	int k;
	int counter;

	i = 0;
	while (i < size)
	{
		counter = 0;
		k = 0;
		while (k < size)
		{
			if (a[i] == b[k])
				counter++;
			k++;
		}
		if (counter >= 2)
		return (1);
		i++;
	}
		return (0);
}

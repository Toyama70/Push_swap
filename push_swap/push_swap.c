/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yasinbestrioui <marvin@42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/01 11:49:47 by yasinbest         #+#    #+#             */
/*   Updated: 2021/12/16 12:27:24 by yasinbest        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "push_swap.h"

void	ft_putstrnl(char *str)
{
	int	i;

	i = 0;
	while(str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
	write(1,"\n", 1);
	return;
}

void	ft_rotate(int array[], int size)
{
	int	temp;
	int	*exchange; // potentiellement non valable pour la norme, a malloc puis free;
	int	i;

	i = 1;
	exchange = malloc(sizeof(int) * size);
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

void	ft_swap(int array[])
{
	int	temp;

	temp = array[1];
	array[1] = array[0];
	array[0] = temp;
}


void	ft_rotmatrix(int array1[], int array2[], int action, int size)
{
	if (action == 3 || action == 6)
	{
		ft_rotate(array1, size);
		if (action == 3)
			ft_putstrnl("ra");
	}
	if (action == 4 || action == 6)
	{
		ft_rotate(array2, size);
		if (action == 4)
			ft_putstrnl("rb");
		else
		{
			ft_putstrnl("rr");
			ft_rotate(array1, size);
			ft_rotate(array2, size);
		}
	}
}


void	ft_swapmatrix(int array1[], int array2[], int action)
{
	if (action == 1 || action == 5)
	{
		ft_swap(array1);
		if (action == 1)
			ft_putstrnl("sa");
	}
	if (action == '2' || action == '5')
	{
		ft_swap(array2);
		if (action == 2)
			ft_putstrnl("sb");
		else 
			ft_putstrnl("ss");
	}
}



void	push_swap(int a[], int b[], int size)
{
	if (ft_calculation(a, b, size) == 1)
		return;
	if (ft_cal2(a, b, size) == 1)
		return;
	if (ft_try_swap_rot(a, b, size) == 1)
		return;
	if (size == 4)
		ft_foursolver(a, b, size);
	if (size == 5)
		ft_fivesolver(a, b, size);
}

int		main(int argc, char *argv[])
{
	int	size;
	int	i;
	int	*a;
	int	*b;

	if (ft_exceptionhandler(argc, argv) == 1)
		return (0);
	i = -1;
	if (argc == 2)
		ft_parser(&a, &b,  &size, argv);
	if (argc > 2)
	{
		size = argc - 1;
		a = malloc(sizeof(int) * size);
		b = malloc(sizeof(int) * size);
		while (++i < size)
			a[i] = ft_atoi(argv[i + 1]);
	}
	ft_fillzero(b, size);
	ft_check(a, b, size);
	ft_size(a, b, size);
	free(a);
	free(b);
}

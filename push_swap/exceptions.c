/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   exceptions.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybestrio <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/11 10:54:38 by ybestrio          #+#    #+#             */
/*   Updated: 2021/12/13 11:45:19 by yasinbest        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "push_swap.h"

int ft_exceptionhandler(int argc, char **argv)
{
	if (argc <= 2)
	{
		if (ft_exceptions1(argc, argv) == 1)
			return (1);
		if (argc == 2)
		{
			if (ft_double(argc, argv) == 1)
				return (1);
		}
	}
	if (argc > 2)
	{
		if (ft_exceptions2(argc, argv) == 1)
			return (1);
		if (ft_doublesigns(argc, argv) == 1)
			return (1);
	}
	return (0);
}

int		ft_doublesigns(int argc, char **a)
{
	int i;
	int k;
	int j;

	i = 1;
	while (i < argc)
	{
		k = 0;
		while (a[i][k] != 0)
		{
			if (a[i][k] == '+' || a[i][k] == '-')
			{
				j = k + 1;
				if (a[i][j] == '+' || a[i][j] == '-')
				{
					write(2, "Error\n", 6);
					return (1);
				}
			}
			k++;
		}
		i++;
	}
	return (0);
}


int		ft_double(int argc, char **a)
{
	int i;
	int k;
	int j;

	i = 1;
	while (i < argc)
	{
		k = 0;
		while (a[i][k] != 0)
		{
			if (a[i][k] == '+' || a[i][k] == '-')
			{
				j = k + 1;
				if (a[i][j] == '+' || a[i][j] == '-')
				{
					write(2, "Error\n", 6);
					return (1);
				}
			}
			k++;
		}
		i++;
	}
	return (0);
}


int		ft_exceptions2(int argc, char **a)
{
	int i;
	int k;

	i = 1;
	k = 0;
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
					return (1);
				}
			}
			k++;
		}
		i++;
	}
	return (0);
}

int		ft_exceptions1(int argc, char **a)
{
	int i;
	int k;

	if (argc == 1)
	{
		write(2, "Error\n", 6);
		return (1);
	}
	i = 1;

	if (argc == 2)	
	{	
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
						return (1);
					}
	
				}
				k++;
			}
			i++;
		}
	}	
	return (0);
}

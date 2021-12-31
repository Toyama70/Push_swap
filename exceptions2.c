/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   exceptions2.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybestrio <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/18 13:18:45 by ybestrio          #+#    #+#             */
/*   Updated: 2021/12/18 16:43:51 by ybestrio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "push_swap.h"

int	ft_exceptions2(int argc, char **a)
{
	int	i;
	int	k;

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

int	ft_exceptions1(int argc, char **a)
{
	if (argc == 1)
		exit(0);
	if (argc == 2)
		doublesign(argc, a);
	return (0);
}

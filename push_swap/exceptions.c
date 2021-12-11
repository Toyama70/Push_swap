/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   exceptions.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybestrio <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/11 10:54:38 by ybestrio          #+#    #+#             */
/*   Updated: 2021/12/11 12:25:45 by ybestrio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "push_swap.h"

int ft_exceptionhandler(int argc, char **argv)
{
	if (ft_exceptions1(argc, argv) == 1)
		return (1);
	if (ft_exceptions2(argc, argc) == 1)
		return (1);

return 0;
}

int ft_exceptions1(int argc, char **argv)
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
			while (argv[i][k] != 0)
			{
				if (argv[i][k] > 57 || argv[i][k] < 48)
				{
					if (argv[i][k] != '+' && argv[i][k] != '-')
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

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsestring.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yasinbestrioui <marvin@42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/12 10:27:14 by yasinbest         #+#    #+#             */
/*   Updated: 2021/12/12 12:42:18 by yasinbest        ###   ########.fr       */
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
		(*a)[i] = atoi(toparse[i]);
		i++;
	}
}

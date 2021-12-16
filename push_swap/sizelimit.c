/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sizelimit.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yasinbestrioui <marvin@42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/16 11:56:27 by yasinbest         #+#    #+#             */
/*   Updated: 2021/12/16 12:15:53 by yasinbest        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "push_swap.h"

void ft_size(int a[], int b[], int size)
{
	if (size <= 5)
		push_swap(a, b, size);
	if (size > 5)
		bigstack(a, b, size);
}

void ft_check(int a[], int b[], int size)
{
if (ft_doublon(a, b, size) == 1)
	exit(0);
if (ft_is_sorted(a, size) == 0)
	exit(0);
}

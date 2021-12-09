/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yasinbestrioui <marvin@42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/01 11:49:47 by yasinbest         #+#    #+#             */
/*   Updated: 2021/12/09 17:52:18 by yasinbest        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "push_swap.h"

void ft_putstrnl(char *str)
{
	int i;

	i = 0;
	while(str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
	write(1,"\n", 1);
	return;
}

void ft_rotate(int array[], int size)
{
	int temp;
	int exchange[size]; // potentiellement non valable pour la norme, a malloc puis free;
	int i;

	i = 1;

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
}

void ft_swap(int array[])
{
	int temp;

	temp = array[1];
	array[1] = array[0];
	array[0] = temp;
}


void ft_rotmatrix(int array1[], int array2[], int action, int size)
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


void ft_swapmatrix(int array1[], int array2[], int action)
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



void push_swap(int a[], int b[], int size)
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

int main(int argc, char *argv[])
{
	int size;
	int i;
	int *a;
	int *b;
	//add exception to wrong input; ft_exceptions argc;
	i = 0;

	/*if (argc == 2)
	{
		//calculer un size; MANDATORY
		a = malloc(sizeof(int) * size);
		b = malloc(sizeof(int) * size);
		//add une fonction qui parse;
	}
	*/
	if (argc > 2)
	{
		size = argc - 1;
		a = malloc(sizeof(int) * size);
		b = malloc(sizeof(int) * size);
		while (i < size)
		{
			a[i] = atoi(argv[i + 1]); //switcher avec atoi perso
			i++;
		}
	}
	else return 0; // a supprimer, bricolage pour Wall Wextra Werror
	ft_fillzero(b, size);
	if (ft_is_sorted(a, size) == 0)
		return 0;
	if (size <= 5)
		push_swap(a, b, size);
	if (size > 5)
		bigstack(a, b, size);
/*	i = -1;
	while (i++ < size - 1)
		printf("final a[i] = %d\n", a[i]);
*/free(a);
free(b);
}

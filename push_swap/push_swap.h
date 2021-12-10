/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yasinbestrioui <marvin@42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/01 14:28:04 by yasinbest         #+#    #+#             */
/*   Updated: 2021/12/10 11:19:50 by yasinbest        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

#include <unistd.h>
#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>


void push_swap(int a[], int b[], int size);
void ft_swapmatrix(int array1[], int array2[], int action);
void ft_rotmatrix(int array1[], int array2[], int action, int size);
void ft_rotate();
void ft_swap();
void ft_putstrnl(char *str);
int ft_is_sorted(int a[], int size);
void ft_revrot(int array[], int size);
void ft_pushmatrix(int array1[], int array2[], int action, int size);
void ft_reverse(int array1[], int array2[], int action, int size);//should be renamed reversematrix
int ft_simplerot(int array[], int size, int *simplerot);
int ft_calculation(int array[], int array2[], int size);
int ft_simplerev(int array[], int size, int *solution);
int ft_simpleswap(int array[], int size, int *solution);
int ft_cal2(int array1[], int array2[], int size);
void ft_pusher(int array1[], int array2[], int size);
int *ft_putboxes(int array1[], int array2[], int size);
void	ft_fillzero(int array[], int size);
int		ft_swaprot(int array[], int size, int *solution);
int		ft_swaprev(int array[], int size, int *solution);
int		ft_try_swap_rot(int array1[], int array2[], int size);
int ft_foursolver(int array1[], int array2[], int size);
void ft_create(int *a[], int size, int array1[]);
void ft_4extract(int acopy[], int bcopy[], int size);
int ft_whichmove(int a[], int b[], int size);
int		ft_fivesolver(int array1[], int array2[], int size);
void	ft_5extract(int acopy[], int bcopy[], int size);
int ft_trisolver(int a[], int b[], int size);
int ft_foursolvercopy(int array1[], int array2[], int size);
void	bigstack(int a[], int b[], int size);
int		convert_base2(int num);
void	ft_binarray(int boxes[], int binary[], int size);
void	radix(int a[], int b[], int size);

#endif

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yasinbestrioui <marvin@42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/01 14:28:04 by yasinbest         #+#    #+#             */
/*   Updated: 2021/12/14 11:38:14 by yasinbest        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

#include <unistd.h>
#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>
int		*ft_putboxes2(int array1[], int array2[], int size);
int		ft_findsmallest(int *a, int size);
void	above700(int a[], int b[], int size);
int		ft_doublon(int *a, int size);
int		ft_doublesigns(int argc, char **a);
int		ft_exceptions2(int argc, char **argv);
int		ft_double(int argc, char **a);
int *zerolast(int a[], int size);
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
int		ft_exceptions1(int argc, char **argv);
int		ft_exceptionhandler(int argc, char **argv);
char	**ft_split(char const *s, char c);
void	ft_free_tab(char **tab);
char	*ft_str(char const *s, char c);
int	count_words(char const *s, char c);
size_t	ft_strlcpy( char *dst, const char *src, size_t size);
void	*ft_calloc(size_t elementCount, size_t elementSize);
void	ft_bzero(void *s, size_t n);
size_t	ft_strlen(const char *theString);
void	ft_parser(int *a[], int *b[], int *size, char **argv);
int		ft_compare(int a[], int b[], int size);
int		ft_atoi(const char *str);
int		check_empty(char *args);
int verif_long(const char *str, int i, int signe);
int		check_int(char *str);


#endif

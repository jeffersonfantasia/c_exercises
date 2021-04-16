/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfranchi <jfranchi@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/04 23:02:25 by jfranchi          #+#    #+#             */
/*   Updated: 2021/04/06 14:54:50 by jfranchi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "ft_sort_int_tab.c"

int main(void)
{
	int a[] = {4,2,3,99,50,1,29,70,45,10};
	int *tab;
	int size = 10;

	tab = &a[0];
	for(int i = 0; i < size; i++)
	{
		printf("%d, ", a[i]);
	}
	printf("\n");
	ft_sort_int_tab(tab , size);

	for(int i = 0; i < size; i++)
	{
		printf("%d, ", a[i]);
	}
	printf("\n");
}

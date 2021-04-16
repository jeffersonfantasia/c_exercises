/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfranchi <jfranchi@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/04 23:02:25 by jfranchi          #+#    #+#             */
/*   Updated: 2021/04/06 14:55:51 by jfranchi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "ft_rev_int_tab.c"

int main(void)
{
	int a[] = {1,2,3,4,5,6};
	int *tab;
	int size = 6;

	tab = &a[0];
	for(int i = 0; i < size; i++)
	{
		printf("%d, ", a[i]);
	}
	printf("\n");
	ft_rev_int_tab(tab , size);
	for(int i = 0; i < size; i++)
	{
		printf("%d, ", a[i]);
	}
	printf("\n");
}

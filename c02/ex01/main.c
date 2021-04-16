/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfranchi <jfranchi@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/04 23:02:25 by jfranchi          #+#    #+#             */
/*   Updated: 2021/04/08 19:32:00 by jfranchi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "ft_strncpy.c"

int main(void)
{
	char a[] = "Test 42 scholl";
	char d[20];
	int size;
	int n;

	size = 14;
	n = 20;
	printf("Scr: ");
	for(int i = 0; i < size; i++)
	{
		printf("%c", a[i]);
	}
	printf("\n");
	ft_strncpy(d, a, n);
	printf("Dest: ");
	for(int i = 0; i < n; i++)
	{
		printf("%c", d[i]);
	}
	printf("\n");
	return (0);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfranchi <jfranchi@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/04 23:02:25 by jfranchi          #+#    #+#             */
/*   Updated: 2021/04/08 22:10:19 by jfranchi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "ft_strcpy.c"

int	main(void)
{
	char a[] = "first";
	char d[5];
	int size;

	size = 5;
	printf("Before function: ");
	for(int i = 0; i < size; i++)
	{
		printf("%c", a[i]);
	}
	printf("\n");
	ft_strcpy(d, a);
	printf("After function: ");
	for(int i = 0; i < size; i++)
	{
		printf("%c", d[i]);
	}
	printf("\n");
	return (0);
}

/*
#include <stdio.h>
#include <stdlib.h>
#include "ft_strcpy.c"

char	*ft_strcpy(char *dest, char *src);

int	main(void)
{
	char *src;
	char *dest;

	src = calloc(11, sizeof(char));
	src = "0123456789";
	dest = calloc(11, sizeof(char));
	ft_strcpy(dest, src);
	printf("src: %s\n", src);
	printf("dest: %s\n", dest);
	return (0);
}
*/
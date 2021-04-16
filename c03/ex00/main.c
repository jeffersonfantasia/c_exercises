/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfranchi <jfranchi@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/04 23:02:25 by jfranchi          #+#    #+#             */
/*   Updated: 2021/04/13 12:53:01 by jfranchi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "ft_strcmp.c"

//int	ft_strcmp(char *s1, char *s2);

int	main(void)
{
	char *s1;
	char *s2;
	char *s3;
	char *s4;
	char s5[] = {'a', 'b', 'c', -10, -20, '\0'};

	s1 = calloc(10, sizeof(char));
	s2 = calloc(8, sizeof(char));
	s3 = calloc(10, sizeof(char));
	s4 = calloc(10, sizeof(char));
	s1 = "abcdefghi";
	s2 = "abcdefghi";
	s3 = "abcdEfghi";
	s4 = "ab0defghi";
	printf("s1: %s, s2: %s, s3: %s, s4: %s, s5: %s\n", s1, s2, s3, s4, s5);
	printf("ft_strcmp_12 = %d, strcmp_12 = %d\n", ft_strcmp(s1, s2), strcmp(s1, s2));
	printf("ft_strcmp_13 = %d, strcmp_13 = %d\n", ft_strcmp(s1, s3), strcmp(s1, s3));
	printf("ft_strcmp_14 = %d, strcmp_14 = %d\n", ft_strcmp(s1, s4), strcmp(s1, s4));
	printf("ft_strcmp_15 = %d, strcmp_15 = %d\n", ft_strcmp(s1, s5), strcmp(s1, s5));
	return(0);
}
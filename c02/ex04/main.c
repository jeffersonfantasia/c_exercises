/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfranchi <jfranchi@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/04 23:02:25 by jfranchi          #+#    #+#             */
/*   Updated: 2021/04/09 15:52:03 by jfranchi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "ft_str_is_lowercase.c"

int main(void)
{
	char a[] = "ajhdhjdfopjvnpmcsfd";
	char b[] = "ajhdiahJADJIJANMiokjsdf";

	printf("%d\n", ft_str_is_lowercase(a) );

	printf("%d\n", ft_str_is_lowercase(b) );

	return (0);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfranchi <jfranchi@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/04 23:02:25 by jfranchi          #+#    #+#             */
/*   Updated: 2021/04/09 20:30:37 by jfranchi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "ft_str_is_uppercase.c"

int main(void)
{
	char a[] = "AZJKSKSFJKSLSLSPITJRS";
	char b[] = "ajhdiahJADJIJANMiokjsdf";

	printf("%d\n", ft_str_is_uppercase(a) );

	printf("%d\n", ft_str_is_uppercase(b) );

	return (0);
}

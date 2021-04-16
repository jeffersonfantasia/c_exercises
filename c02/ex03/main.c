/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfranchi <jfranchi@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/04 23:02:25 by jfranchi          #+#    #+#             */
/*   Updated: 2021/04/09 15:51:25 by jfranchi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "ft_str_is_numeric.c"

int main(void)
{
	char a[] = {'1','2','5','6','4','8','6'};
	char b[] = {'1','2','5','j','4','k','6'};

	printf("%d\n", ft_str_is_numeric(a) );

	printf("%d\n", ft_str_is_numeric(b) );

	return (0);
}

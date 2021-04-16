/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfranchi <jfranchi@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/04 23:02:25 by jfranchi          #+#    #+#             */
/*   Updated: 2021/04/05 17:07:50 by jfranchi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "ft_ultimate_div_mod.c"

int main(void)
{
	int	a;
	int	b;
	int	*c;
	int	*d;

	a = 10;
	b = 5;
	c = &a;
	d = &b;
	printf("Before function 'c' value is %d\n", *c);
	printf("Before function 'd' value is %d\n", *d);
	ft_ultimate_div_mod(c, d);
	printf("After function 'c' value is %d\n", *c);
	printf("After function 'd' value is %d\n", *d);
}

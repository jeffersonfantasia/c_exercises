/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfranchi <jfranchi@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/04 23:02:25 by jfranchi          #+#    #+#             */
/*   Updated: 2021/04/05 15:19:33 by jfranchi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "ft_div_mod.c"

int main(void)
{
	int a;
	int b;
	int *div;
	int *mod;

	a = 22;
	b = 5;
	div = &a;
	mod = &b;
	ft_div_mod(a, b, &a, &b);
	printf(" Div value is %d\n", *div);
	printf(" Mod value is %d\n", *mod);
}

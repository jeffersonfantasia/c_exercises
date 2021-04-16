/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfranchi <jfranchi@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/04 23:02:25 by jfranchi          #+#    #+#             */
/*   Updated: 2021/04/08 01:29:05 by jfranchi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "ft_putnbr.c"

int main(void)
{
	ft_putnbr(102);
	printf("\n");
	ft_putnbr(-8000000);
	printf("\n");
	ft_putnbr(400000002);
	printf("\n");
	ft_putnbr(-2147483648);
	printf("\n");
	ft_putnbr(2147483647);
	printf("\n");
	ft_putnbr(0);
	printf("\n");
	ft_putnbr(-900232);
	printf("\n");

}

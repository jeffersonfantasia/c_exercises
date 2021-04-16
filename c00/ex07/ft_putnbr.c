/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfranchi <jfranchi@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/07 20:34:57 by jfranchi          #+#    #+#             */
/*   Updated: 2021/04/08 14:10:36 by jfranchi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print(int n)
{
	char p;

	p = n + '0';
	write(1, &p, 1);
}

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
	{
		write(1, "-2", 2);
		nb = 147483648;
	}
	if (nb < 0)
	{
		write(1, "-", 1);
		nb = nb * (-1);
	}
	if (nb >= 10)
	{
		ft_putnbr(nb / 10);
	}
	ft_print(nb % 10);
}

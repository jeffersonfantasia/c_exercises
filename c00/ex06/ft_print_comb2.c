/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfranchi <jfranchi@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/07 14:46:02 by jfranchi          #+#    #+#             */
/*   Updated: 2021/04/07 15:25:39 by jfranchi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print(int n)
{
	char div;
	char mod;

	div = (n / 10) + '0';
	mod = (n % 10) + '0';
	write(1, &div, 1);
	write(1, &mod, 1);
}

void	ft_print_comb2(void)
{
	int f;
	int s;

	f = 0;
	s = f + 1;
	while (f < 99)
	{
		while (s < 100)
		{
			if (s != f)
			{
				ft_print(f);
				write(1, " ", 1);
				ft_print(s);
				if (f != 98)
					write(1, ", ", 2);
			}
			s++;
		}
		s = f + 1;
		f++;
	}
}

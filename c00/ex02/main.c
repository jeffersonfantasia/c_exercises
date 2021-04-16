/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfranchi <jfranchi@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/02 12:30:02 by jfranchi          #+#    #+#             */
/*   Updated: 2021/04/02 15:24:56 by jfranchi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_print_reverse_alphabet.c"

int main(void)
{
	//ft_print_reverse_alphabet();
	char c;
	c = 'z';
	while (c >= 'a')
	{
		write(1, &c, 1);
		c--;
	}
}

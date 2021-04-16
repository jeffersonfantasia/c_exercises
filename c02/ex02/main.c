/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfranchi <jfranchi@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/04 23:02:25 by jfranchi          #+#    #+#             */
/*   Updated: 2021/04/09 14:44:17 by jfranchi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "ft_str_is_alpha.c"

int main(void)
{
	char a[] = "chupaMoulinette";
	char b[] = "teste!errado";

	printf("%d\n", ft_str_is_alpha(a));

	printf("%d\n", ft_str_is_alpha(b));

	return (0);
}

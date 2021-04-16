/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfranchi <jfranchi@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/04 23:02:25 by jfranchi          #+#    #+#             */
/*   Updated: 2021/04/06 14:56:36 by jfranchi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "ft_strlen.c"

int main(void)
{
	int  result;
	char *str = "42 scholl";

	result = ft_strlen(str);
	printf("n = %d\n", result);
}

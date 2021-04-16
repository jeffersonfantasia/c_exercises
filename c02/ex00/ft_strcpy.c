/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfranchi <jfranchi@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/06 15:56:22 by jfranchi          #+#    #+#             */
/*   Updated: 2021/04/09 14:12:52 by jfranchi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcpy(char *dest, char *src)
{
	char *init;

	init = dest;
	while (*src)
	{
		*dest++ = *src++;
	}
	*dest = '\0';
	dest = init;
	return (dest);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfranchi <jfranchi@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/06 22:56:41 by jfranchi          #+#    #+#             */
/*   Updated: 2021/04/09 14:59:12 by jfranchi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	char *init;

	init = dest;
	while (n)
	{
		if (*src == '\0' && n > 0)
		{
			*dest = '\0';
			dest++;
		}
		else
		{
			*dest = *src;
			dest++;
			src++;
		}
		n--;
	}
	dest = init;
	return (dest);
}

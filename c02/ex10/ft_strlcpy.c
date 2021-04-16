/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfranchi <jfranchi@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/12 15:31:22 by jfranchi          #+#    #+#             */
/*   Updated: 2021/04/14 12:42:42 by jfranchi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int				ft_strlen(char *src)
{
	int counter;

	counter = 1;
	while (*src != '\0')
	{
		src++;
		counter++;
	}
	return (counter);
}

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int i;

	i = 0;
	size = size - 1;
	while (src[i] != '\0' && size > 0 && i < size)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (ft_strlen(src));
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfranchi <jfranchi@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/15 01:38:09 by jfranchi          #+#    #+#             */
/*   Updated: 2021/04/15 13:37:56 by jfranchi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int i;
	int j;

	i = 0;
	j = 0;
	if (to_find[i] == '\0')
		return (str);
	while (str[j])
	{
		if (str[j] != to_find[i])
			j++;
		if (str[j] == to_find[i])
		{
			j++;
			i++;
			if (to_find[i] == '\0')
				return (&str[j - i]);
		}
		else
			i = 0;
	}
	return (0);
}

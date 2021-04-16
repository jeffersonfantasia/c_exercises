/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfranchi <jfranchi@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/12 13:56:00 by jfranchi          #+#    #+#             */
/*   Updated: 2021/04/12 15:24:57 by jfranchi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str)
{
	while (*str)
	{
		if (*str >= 'A' && *str <= 'Z')
			*str += 32;
		str++;
	}
	return (str);
}

void	ft_logic(char *str, int i)
{
	int a;
	int v1;
	int v2;
	int v3;
	int v4;

	a = i - 1;
	v1 = (str[i] >= 'A' && str[i] <= 'Z');
	v2 = (str[i] >= 'a' && str[i] <= 'z');
	v3 = (str[a] >= 'A' && str[a] <= 'Z');
	v4 = (str[a] >= 'a' && str[a] <= 'z');
	if (i == 0)
	{
		if (v1 || v2)
			str[i] -= 32;
	}
	else if (!(v3 || v4 || (str[a] >= '0' && str[a] <= '9')))
	{
		if ((v1 || v2))
			str[i] -= 32;
	}
}

char	*ft_strcapitalize(char *str)
{
	int i;

	ft_strlowcase(str);
	i = 0;
	while (str[i] != '\0')
	{
		ft_logic(str, i);
		i++;
	}
	return (str);
}

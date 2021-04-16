/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfranchi <jfranchi@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/16 12:15:36 by jfranchi          #+#    #+#             */
/*   Updated: 2021/04/16 12:59:03 by jfranchi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int i;
	int sign;
	int numbers;

	sign = 1;
	numbers = 0;
	i = 0;
	while (!(str[i] >= '0' && str[i] <= '9')
		&& str[i] != '-' && str[i] != '+')
	{
		i++;
	}
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign = -sign;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		numbers = (numbers * 10) + str[i] - '0';
		i++;
	}
	return (sign * numbers);
}

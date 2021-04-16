/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   validations.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfranchi <jfranchi@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/10 23:56:04 by jfranchi          #+#    #+#             */
/*   Updated: 2021/04/12 02:21:25 by jfranchi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_valid_sum_num(char *a)
{
	int b;
	int sum;

	sum = 0;
	while (*a)
	{
		b = *a - '0';
		sum = sum + b;
		a++;
	}
	if (sum < 34 && sum > 36)
		return (0);
	else
		return (1);
}

int	ft_valid_pairs_i(char *a)
{
	int i;

	i = 0;
	while (i < 4)
	{
		if (a[i] == '1' && a[i + 4] == '1')
			return (0);
		if (a[i] == '4' && a[i + 4] == '4')
			return (0);
		if (a[i] == '3' && a[i + 4] == '3')
			return (0);
		else
			i++;
	}
	return (1);
}

int	ft_valid_pairs_f(char *a)
{
	int i;

	i = 8;
	while (i < 12)
	{
		if (a[i] == '1' && a[i + 4] == '1')
			return (0);
		if (a[i] == '4' && a[i + 4] == '4')
			return (0);
		if (a[i] == '3' && a[i + 4] == '3')
			return (0);
		else
			i++;
	}
	return (1);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   validations2.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfranchi <jfranchi@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/10 23:56:04 by jfranchi          #+#    #+#             */
/*   Updated: 2021/04/12 02:22:02 by jfranchi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_valid_lenth(char *a)
{
	int count;

	count = 0;
	while (*a != '\0')
	{
		a++;
		count++;
	}
	if (count != 16)
		return (0);
	else
		return (1);
}

int	ft_valid_numbers(char *a)
{
	while (*a != '\0')
	{
		if (*a < '1' || *a > '4')
			return (0);
		else
			a++;
	}
	return (1);
}

int	ft_valid_sum_pairs_i(char *a)
{
	int i;
	int b;
	int c;
	int s;
	int v;

	i = 0;
	while (i < 4)
	{
		b = a[i] - '0';
		c = a[i + 4] - '0';
		s = c + b;
		v = '5' - '0';
		if (s > v)
			return (0);
		else
			i++;
	}
	return (1);
}

int	ft_valid_sum_pairs_f(char *a)
{
	int i;
	int b;
	int c;
	int s;
	int v;

	i = 8;
	while (i < 12)
	{
		b = a[i] - '0';
		c = a[i + 4] - '0';
		s = c + b;
		v = '5' - '0';
		if (s > v)
			return (0);
		else
			i++;
	}
	return (1);
}

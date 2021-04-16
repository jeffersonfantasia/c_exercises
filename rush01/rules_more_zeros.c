/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rules_more_zeros.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfranchi <jfranchi@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/11 20:31:37 by jfranchi          #+#    #+#             */
/*   Updated: 2021/04/12 00:55:32 by jfranchi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sum_line(char m[4][4], int a)
{
	int j;
	int sum;
	int result;
	int ver;

	j = 0;
	sum = 0;
	ver = 0;
	while (j < 4)
	{
		if (m[a][j] == '1')
		{
			ver = 1;
		}
		if (m[a][j] != '0')
		{
			result = (m[a][j]) - '0';
			sum = sum + result;
		}
		j++;
	}
	if (ver == 1 && sum == 5)
		return (10);
	else
		return (sum);
}

int	ft_sum_col(char m[4][4], int b)
{
	int i;
	int sum;
	int result;
	int ver;

	i = 0;
	sum = 0;
	ver = 0;
	while (i < 4)
	{
		if (m[i][b] == '1')
		{
			ver = 1;
		}
		if (m[i][b] != '0')
		{
			result = (m[i][b]) - '0';
			sum = sum + result;
		}
		i++;
	}
	if (ver == 1 && sum == 5)
		return (10);
	else
		return (sum);
}

int	ft_count_line(char m[4][4], int a)
{
	int j;
	int count;

	j = 0;
	count = 0;
	while (j < 4)
	{
		if (m[a][j] != '0')
		{
			count++;
		}
		j++;
	}
	return (count);
}

int	ft_count_col(char m[4][4], int b)
{
	int i;
	int count;

	i = 0;
	count = 0;
	while (i < 4)
	{
		if (m[i][b] != '0')
		{
			count++;
		}
		i++;
	}
	return (count);
}

void	ft_verified_sum(char m[4][4], int c, int l, int i, int j)
{
	if ((c == 3 && l == 5) || (c == 5 && l == 3))
		m[i][j] = '4';
	else if ((c == 3 && l == 4) || (c == 4 && l == 3))
		m[i][j] = '4';
	else if ((c == 10 && l == 4) || (c == 4 && l == 10))
		m[i][j] = '3';
	else if ((c == 5 && l == 7) || (c == 7 && l == 5))
		m[i][j] = '1';
	else if ((c == 5 && l == 6) || (c == 6 && l == 5))
		m[i][j] = '1';
	else if ((c == 6 && l == 7) || (c == 7 && l == 6))
		m[i][j] = '1';
	else if ((c == 10 && l == 6) || (c == 6 && l == 10))
		m[i][j] = '3';
}

void	ft_more_zeros(char m[4][4])
{
	int i;
	int j;
	int a;
	int b;
	int sum_line;
	int sum_col;
	int count_line;
	int count_col;

	i = 0;
	while (i < 4)
	{
		j = 0;
		while (j < 4)
		{
			if (m[i][j] == '0')
			{
				a = i;
				b = j;
				sum_col = ft_sum_col(m, b);
				sum_line = ft_sum_line(m, a);
				count_col = ft_count_col(m, b);
				count_line = ft_count_line(m, a);
				if (count_col > 1 && count_line > 1)
					ft_verified_sum(m, sum_col, sum_line, i, j);
			}
			j++;
		}
		i++;
	}
}

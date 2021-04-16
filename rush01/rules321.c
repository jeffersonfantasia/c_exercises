/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rules321.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfranchi <jfranchi@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/11 14:17:23 by jfranchi          #+#    #+#             */
/*   Updated: 2021/04/12 02:31:06 by jfranchi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rule_up25(char *newa, char m[4][4])
{
	int c;
	int i;

	c = 0;
	i = 0;
	while (c < 4)
	{
		if (newa[c] == '3' && newa[c + 4] == '2' && m[3][i] == '1')
		{
			if (m[0][i] == '0')
			{
				m[0][i] = '2';
				c++;
				i++;
			}
		}
		else
			c++;
		i++;
	}
}

void	ft_rule_down26(char *newa, char m[4][4])
{
	int c;
	int i;

	c = 4;
	i = 0;
	while (c < 8)
	{
		if (newa[c] == '3' && newa[c - 4] == '2' && m[0][i] == '1')
		{
			if (m[3][i] == '0')
			{
				m[3][i] = '2';
				c++;
				i++;
			}
		}
		else
			c++;
		i++;
	}
}

void	ft_rule_left27(char *newa, char m[4][4])
{
	int c;
	int i;

	c = 8;
	i = 0;
	while (c < 12)
	{
		if (newa[c] == '3' && newa[c + 4] == '2' && m[i][3] == '1')
		{
			if (m[i][0] == '0')
			{
				m[i][0] = '2';
				c++;
				i++;
			}
		}
		else
			c++;
		i++;
	}
}

void	ft_rule_right28(char *newa, char m[4][4])
{
	int c;
	int i;

	c = 12;
	i = 0;
	while (c < 16)
	{
		if (newa[c] == '3' && newa[c - 4] == '2' && m[i][0] == '1')
		{
			if (m[i][3] == '0')
			{
				m[i][3] = '2';
				c++;
				i++;
			}
		}
		else
			c++;
		i++;
	}
}

void	ft_rules_32_1(char *newa, char m[4][4])
{
	ft_rule_up25(newa, m);
	ft_rule_down26(newa, m);
	ft_rule_left27(newa, m);
	ft_rule_right28(newa, m);
}

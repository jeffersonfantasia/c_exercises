/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rules231.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfranchi <jfranchi@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/11 14:17:23 by jfranchi          #+#    #+#             */
/*   Updated: 2021/04/12 02:30:43 by jfranchi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rule_up21(char *newa, char m[4][4])
{
	int c;
	int i;

	c = 0;
	i = 0;
	while (c < 4)
	{
		if (newa[c] == '2' && newa[c + 4] == '3' && m[3][i] == '2')
		{
			if (m[0][i] == '0')
			{
				m[0][i] = '1';
				c++;
				i++;
			}
		}
		else
			c++;
		i++;
	}
}

void	ft_rule_down22(char *newa, char m[4][4])
{
	int c;
	int i;

	c = 4;
	i = 0;
	while (c < 8)
	{
		if (newa[c] == '2' && newa[c - 4] == '3' && m[0][i] == '2')
		{
			if (m[3][i] == '0')
			{
				m[3][i] = '1';
				c++;
				i++;
			}
		}
		else
			c++;
		i++;
	}
}

void	ft_rule_left23(char *newa, char m[4][4])
{
	int c;
	int i;

	c = 8;
	i = 0;
	while (c < 12)
	{
		if (newa[c] == '2' && newa[c + 4] == '3' && m[i][3] == '2')
		{
			if (m[i][0] == '0')
			{
				m[i][0] = '1';
				c++;
				i++;
			}
		}
		else
			c++;
		i++;
	}
}

void	ft_rule_right24(char *newa, char m[4][4])
{
	int c;
	int i;

	c = 12;
	i = 0;
	while (c < 16)
	{
		if (newa[c] == '2' && newa[c - 4] == '3' && m[i][0] == '2')
		{
			if (m[i][3] == '0')
			{
				m[i][3] = '1';
				c++;
				i++;
			}
		}
		else
			c++;
		i++;
	}
}

void	ft_rules_23_1(char *newa, char m[4][4])
{
	ft_rule_up21(newa, m);
	ft_rule_down22(newa, m);
	ft_rule_left23(newa, m);
	ft_rule_right24(newa, m);
}

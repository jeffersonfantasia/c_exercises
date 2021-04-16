/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rules32.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfranchi <jfranchi@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/12 01:44:02 by jfranchi          #+#    #+#             */
/*   Updated: 2021/04/12 02:29:53 by jfranchi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rule_up13(char *newa, char m[4][4])
{
	int c;
	int i;

	c = 0;
	i = 0;
	while (c < 4)
	{
		if (newa[c] == '3' && (m[1][i] == '1' || m[2][i] == '1'))
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

void	ft_rule_down14(char *newa, char m[4][4])
{
	int c;
	int i;

	c = 4;
	i = 0;
	while (c < 8)
	{
		if (newa[c] == '3' && (m[1][i] == '1' || m[2][i] == '1'))
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

void	ft_rule_left15(char *newa, char m[4][4])
{
	int c;
	int i;

	c = 8;
	i = 0;
	while (c < 12)
	{
		if (newa[c] == '3' && (m[i][1] == '1' || m[i][2] == '1'))
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

void	ft_rule_right16(char *newa, char m[4][4])
{
	int c;
	int i;

	c = 12;
	i = 0;
	while (c < 16)
	{
		if (newa[c] == '3' && (m[i][1] == '1' || m[i][2] == '1'))
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

void	ft_rules_3_2(char *newa, char m[4][4])
{
	ft_rule_up13(newa, m);
	ft_rule_down14(newa, m);
	ft_rule_left15(newa, m);
	ft_rule_right16(newa, m);
}

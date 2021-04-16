/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rules01.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfranchi <jfranchi@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/11 14:17:23 by jfranchi          #+#    #+#             */
/*   Updated: 2021/04/12 02:23:37 by jfranchi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rule_up1(char *newa, char m[4][4])
{
	int c;
	int i;

	c = 0;
	i = 0;
	while (c < 4)
	{
		if (newa[c] == '1')
		{
			m[0][i] = '4';
			c++;
			i++;
		}
		else
		{
			c++;
			i++;
		}
	}
}

void	ft_rule_down2(char *newa, char m[4][4])
{
	int c;
	int i;

	c = 4;
	i = 0;
	while (c < 8)
	{
		if (newa[c] == '1')
		{
			m[3][i] = '4';
			c++;
			i++;
		}
		else
		{
			c++;
			i++;
		}
	}
}

void	ft_rule_left3(char *newa, char m[4][4])
{
	int c;
	int i;

	c = 8;
	i = 0;
	while (c < 12)
	{
		if (newa[c] == '1')
		{
			m[i][0] = '4';
			c++;
			i++;
		}
		else
		{
			c++;
			i++;
		}
	}
}

void	ft_rule_right4(char *newa, char m[4][4])
{
	int c;
	int i;

	c = 12;
	i = 0;
	while (c < 16)
	{
		if (newa[c] == '1')
		{
			m[i][3] = '4';
			c++;
			i++;
		}
		else
		{
			c++;
			i++;
		}
	}
}

void	ft_rules_one(char *newa, char m[4][4])
{
	ft_rule_up1(newa, m);
	ft_rule_down2(newa, m);
	ft_rule_left3(newa, m);
	ft_rule_right4(newa, m);
}

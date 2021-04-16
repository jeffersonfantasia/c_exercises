/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rules04.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfranchi <jfranchi@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/11 14:17:23 by jfranchi          #+#    #+#             */
/*   Updated: 2021/04/12 02:29:29 by jfranchi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rule_up9(char *newa, char m[4][4])
{
	int c;
	int i;

	c = 0;
	i = 0;
	while (c < 4)
	{
		if (newa[c] == '4')
		{
			m[0][i] = '1';
			m[1][i] = '2';
			m[2][i] = '3';
			m[3][i] = '4';
			c++;
			i++;
		}
		else
			c++;
		i++;
	}
}

void	ft_rule_down10(char *newa, char m[4][4])
{
	int c;
	int i;

	c = 4;
	i = 0;
	while (c < 8)
	{
		if (newa[c] == '4')
		{
			m[0][i] = '4';
			m[1][i] = '3';
			m[2][i] = '2';
			m[3][i] = '1';
			c++;
			i++;
		}
		else
			c++;
		i++;
	}
}

void	ft_rule_left11(char *newa, char m[4][4])
{
	int c;
	int i;

	c = 8;
	i = 0;
	while (c < 12)
	{
		if (newa[c] == '4')
		{
			m[i][0] = '1';
			m[i][1] = '2';
			m[i][2] = '3';
			m[i][3] = '4';
			c++;
			i++;
		}
		else
			c++;
		i++;
	}
}

void	ft_rule_right12(char *newa, char m[4][4])
{
	int c;
	int i;

	c = 12;
	i = 0;
	while (c < 16)
	{
		if (newa[c] == '4')
		{
			m[i][0] = '4';
			m[i][1] = '3';
			m[i][2] = '2';
			m[i][3] = '1';
			c++;
			i++;
		}
		else
			c++;
		i++;
	}
}

void	ft_rules_four(char *newa, char m[4][4])
{
	ft_rule_up9(newa, m);
	ft_rule_down10(newa, m);
	ft_rule_left11(newa, m);
	ft_rule_right12(newa, m);
}

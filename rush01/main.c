/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfranchi <jfranchi@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/10 14:49:45 by jfranchi          #+#    #+#             */
/*   Updated: 2021/04/12 02:39:56 by jfranchi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

int		ft_valid_lenth(char *a);
int		ft_valid_numbers(char *a);
int		ft_valid_sum_pairs_i(char *a);
int		ft_valid_sum_pairs_f(char *a);
int		ft_valid_sum_num(char *a);
int		ft_valid_pairs_i(char *a);
int		ft_valid_pairs_f(char *a);
void	ft_start(char m[4][4]);
void	ft_rules_four(char *newa, char m[4][4]);
void	ft_rules_one(char *newa, char m[4][4]);
void	ft_rules_three(char *newa, char m[4][4]);
void	ft_rules_32_1(char *newa, char m[4][4]);
void	ft_rules_23_1(char *newa, char m[4][4]);
void	ft_check_lines(char m[4][4]);
void	ft_check_columns(char m[4][4]);
void	ft_more_zeros(char m[4][4]);
void	ft_rules_3_2(char *newa, char m[4][4]);
void	ft_rules_22_3(char *newa, char m[4][4]);

void	ft_printm(char m[4][4])
{
	int i;
	int j;

	i = 0;
	while (i < 4)
	{
		j = 0;
		while (j < 4)
		{
			write(1, &m[i][j], 1);
			write(1, " ", 1);
			j++;
		}
		i++;
		write(1, "\n", 1);
	}
}

void	ft_clean_array(char *a, char *b)
{
	while (*a != '\0')
	{
		if (*a >= '0' && *a <= '9')
		{
			*b = *a;
			a++;
			b++;
		}
		else
			a++;
	}
	*b = '\0';
}

int		main(int argc, char **argv)
{
	char m[4][4];
	char *numbers;
	char ary[17];
	char *newa;
	int nargc;

	numbers = argv[1];
	nargc = argc;
	newa = &ary[0];
	ft_clean_array(numbers, newa);
	if (ft_valid_lenth(newa) == 0 || ft_valid_numbers(newa) == 0)
		write(1, "Error\n", 6);
	else if (ft_valid_sum_pairs_f(newa) == 0 || ft_valid_sum_pairs_i(newa) == 0)
		write(1, "Error\n", 6);
	else if (ft_valid_sum_num(newa) == 0 || ft_valid_pairs_i(newa) == 0)
		write(1, "Error\n", 6);
	else if (ft_valid_pairs_f(newa) == 0)
		write(1, "Error\n", 6);
	else
	{
		ft_start(m);
		ft_rules_four(newa, m);
		ft_rules_one(newa, m);
		ft_rules_three(newa, m);
		ft_rules_32_1(newa, m);
		ft_rules_23_1(newa, m);
		ft_check_lines(m);
		ft_check_columns(m);
		ft_more_zeros(m);
		ft_check_lines(m);
		ft_check_columns(m);
		ft_rules_3_2(newa, m);
		ft_check_lines(m);
		ft_check_columns(m);
		ft_rules_22_3(newa, m);
		ft_check_columns(m);
		ft_check_lines(m);
		ft_more_zeros(m);
		ft_printm(m);
	}
}

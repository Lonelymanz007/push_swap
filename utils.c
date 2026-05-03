/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tphuwian <tphuwian@student.42bangkok.com>  #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026-05-03 16:06:21 by tphuwian          #+#    #+#             */
/*   Updated: 2026-05-03 16:06:21 by tphuwian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	check_num_duplicate(int *tab, int len)
{
	int	i;
	int	j;

	i = 0;
	if (!tab || len <= 0)
		return (0);
	while (i < len - 1)
	{
		j = i + 1;
		while (j < len)
		{
			if (tab[i] == tab[j])
				return (1);
			j++;
		}
		i++;
	}
	return (0);
}

int	find_max(int *tab, int len)
{
	int	i;
	int	max;

	i = 0;
	max = tab[0];
	if (len <= 0 || !tab)
		return (0);
	while (i < len)
	{
		if (tab[i] > max)
			max = tab[i];
		i++;
	}
	return (max);
}

int	find_min(int *tab, int len)
{
	int	i;
	int	min;

	i = 0;
	min = tab[0];
	if (len <= 0 || !tab)
		return (0);
	while (i < len)
	{
		if (tab[i] < min)
			min = tab[i];
		i++;
	}
	return (min);
}

long	ft_atol(char *str)
{
	int		i;
	long	ans;
	int		sign;

	i = 0;
	ans = 0;
	sign = 1;
	while (str[i] >= 9 && str[i] <= 13)
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign = -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		ans = ans * 10 + (str[i] - '0');
		i++;
	}
	return (ans * sign);
}

int	check_is_real_num(char *str)
{
	int	i;
	int	digit;

	digit = 0;
	i = 0;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
		i++;
	if (str[i] == '-' || str[i] == '+')
		i++;
	while (str[i])
	{
		if (str[i] < '0' || str[i] > '9')
			return (0);
		digit = 1;
		i++;
	}
	return (digit);
}

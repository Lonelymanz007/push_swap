/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operation.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tphuwian <tphuwian@student.42bangkok.com>  #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026-05-03 18:26:11 by tphuwian          #+#    #+#             */
/*   Updated: 2026-05-03 18:26:11 by tphuwian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sa(t_stacks *stacks)
{
	int	temp;

	if (stacks->size_a < 2)
		return ;
	temp = stacks->a[0];
	stacks->a[0] = stacks->a[1];
	stacks->a[1] = temp;
	ft_putstr("sa\n", 1);
}

void	sb(t_stacks *stacks)
{
	do_swap(stacks->b, stacks->size_b);
	ft_putstr("sb\n", 1);
}

void	ss(t_stacks *stacks)
{
	do_swap(stacks->a, stacks->size_a);
	do_swap(stacks->b, stacks->size_b);
	ft_putstr("ss\n", 1);
}

void	pa(t_stacks *stacks)
{
	int	i;

	if (stacks->size_b == 0)
		return ;
	i = stacks->size_a;
	while (i > 0)
	{
		stacks->a[i] = stacks->a[i - 1];
		i--;
	}
	stacks->a[0] = stacks->b[0];
	stacks->size_a++;
	i = 0;
	while (i < stacks->size_b - 1)
	{
		stacks->b[i] = stacks->b[i + 1];
		i++;
	}
	stacks->size_b--;
	ft_putstr("pa\n", 1);
}

void	pb(t_stacks *stacks)
{
	int	i;

	if (stacks->size_a == 0)
		return ;
	i = stacks->size_b;
	while (i > 0)
	{
		stacks->b[i] = stacks->b[i - 1];
		i--;
	}
	stacks->b[0] = stacks->a[0];
	stacks->size_b++;
	i = 0;
	while (i < stacks->size_a - 1)
	{
		stacks->a[i] = stacks->a[i + 1];
		i++;
	}
	stacks->size_a--;
	ft_putstr("pb\n", 1);
}

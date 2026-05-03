/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operation2.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tphuwian <tphuwian@student.42bangkok.com>  #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026-05-03 18:32:36 by tphuwian          #+#    #+#             */
/*   Updated: 2026-05-03 18:32:36 by tphuwian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ra(t_stacks *stacks)
{
	do_rotate(stacks->a, stacks->size_a);
	ft_putstr("ra\n", 1);
}

void	rb(t_stacks *stacks)
{
	do_rotate(stacks->b, stacks->size_b);
	ft_putstr("rb\n", 1);
}

void	rr(t_stacks *stacks)
{
	do_rotate(stacks->a, stacks->size_a);
	do_rotate(stacks->b, stacks->size_b);
	ft_putstr("rr\n", 1);
}

void	rra(t_stacks *stacks)
{
	do_rev_rotate(stacks->a, stacks->size_a);
	ft_putstr("rra\n", 1);
}

void	rrb(t_stacks *stacks)
{
	do_rev_rotate(stacks->b, stacks->size_b);
	ft_putstr("rrb\n", 1);
}

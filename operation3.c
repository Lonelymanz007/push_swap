/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operation3.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tphuwian <tphuwian@student.42bangkok.com>  #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026-05-03 18:36:25 by tphuwian          #+#    #+#             */
/*   Updated: 2026-05-03 18:36:25 by tphuwian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rrr(t_stacks *stacks)
{
	do_rev_rotate(stacks->a, stacks->size_a);
	do_rev_rotate(stacks->b, stacks->size_b);
	ft_putstr("rrr\n", 1);
}

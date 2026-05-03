/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tphuwian <tphuwian@student.42bangkok.com>  #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026-05-03 19:19:42 by tphuwian          #+#    #+#             */
/*   Updated: 2026-05-03 19:19:42 by tphuwian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
#define PUSH_SWAP_H

# include <stdlib.h>
# include <unistd.h>

typedef struct s_stacks
{
	int	*a;
	int	*b;
	int	size_a;
	int	size_b;
}		t_stacks;

// cm_op = common operation//
int		init_stacks(t_stacks *stacks, int total_size);
void	fill_stack_a(t_stacks *stacks, char **word);
void	do_swap(int *arr, int size);
void	do_rotate(int *arr, int size);
void	do_rev_rotate(int *arr, int size);

// operation
void	sa(t_stacks *stacks);
void	sb(t_stacks *stacks);
void	ss(t_stacks *stacks);
void	pa(t_stacks *stacks);
void	pb(t_stacks *stacks);

// operation2
void	ra(t_stacks *stacks);
void	rb(t_stacks *stacks);
void	rr(t_stacks *stacks);
void	rra(t_stacks *stacks);
void	rrb(t_stacks *stacks);

// operation3
void	rrr(t_stacks *stacks);

// split
char	is_space(char c);
int		count_word(char *str);
char	*ft_substr(const char *str, int start, int len);
char	**ft_split(char *str);

// utils
int		check_num_duplicate(int *tab, int len);
int		find_max(int *tab, int len);
int		find_min(int *tab, int len);
long	ft_atol(char *str);
int		check_is_real_num(char *str);

// utils2
void	ft_putstr(char *str, int status);
int		report_error(void);

//main
void	free_split(char **words);

#endif
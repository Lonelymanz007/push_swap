/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tphuwian <tphuwian@student.42bangkok.com>  #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026-05-03 15:53:25 by tphuwian          #+#    #+#             */
/*   Updated: 2026-05-03 15:53:25 by tphuwian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	free_split(char **words)
{
	int	i;

	i = 0;
	if (!words)
		return ;
	while (words[i])
	{
		free(words[i]);
		i++;
	}
	free(words);
}

int	main(int ac, char **av)
{
	t_stacks	stacks;
	char		**words;
	int			total_size;
	int			is_allocated;

	if (ac < 2)
		report_error();
	is_allocated = 0;
	if (ac == 2)
	{
		total_size = count_word(av[1]);
		words = ft_split(av[1]);
		is_allocated = 1;
	}
	else
	{
		total_size = ac - 1;
		words = av + 1;
	}
	if (!init_stacks(&stacks, total_size))
		return (1);
	fill_stack_a(&stacks, words);
	if (is_allocated)
		free_split(words);
}

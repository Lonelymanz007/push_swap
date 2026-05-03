/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils2.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tphuwian <tphuwian@student.42bangkok.com>  #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026-05-03 17:21:21 by tphuwian          #+#    #+#             */
/*   Updated: 2026-05-03 17:21:21 by tphuwian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_putstr(char *str, int status)
{
	int	i;
	int	fd;

	i = 0;
	if (status == 0)
		fd = 1;
	else
		fd = 2;
	while (str[i])
	{
		write(fd, &str[i], 1);
		i++;
	}
}

int report_error(void)
{
    ft_putstr("Error\n", 0);
    return(0);
}

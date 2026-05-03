/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cm_op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tphuwian <tphuwian@student.42bangkok.com>  #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026-05-03 18:38:40 by tphuwian          #+#    #+#             */
/*   Updated: 2026-05-03 18:38:40 by tphuwian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int init_stacks(t_stacks *stacks, int total_size)
{
    stacks->a = (int *)malloc(sizeof(int) * (total_size+1));
    if(!stacks->a)
        return(0);
    stacks->b = (int *)malloc(sizeof(int) * (total_size+1));
    if(!stacks->b)
    {
        free(stacks->a);
        return(0);
    }

    stacks->size_a = 0;
    stacks->size_b = 0;
    return (1);
}

void fill_stack_a(t_stacks *stacks, char **word)
{
    int i;
    long num;
    i = 0;

    while(word[i])
    {
        if(!check_is_real_num(word[i]))
            report_error();
        num = atol(word[i]);
        if(num > 2147483647 || num < -2147483648)
            report_error();
        stacks->a[stacks->size_a] = (int)num;
        stacks->size_a++;
        i++;
    }
}

void do_swap(int *arr, int size)
{
    int temp;

    if (size < 2)
        return ;
    temp = arr[0];
    arr[0] = arr[1];
    arr[1] = temp;
}

void do_rotate(int *arr, int size)
{
    int temp;
    int i;

    if (size < 2)
        return ;
    temp = arr[0];
    i = 0;
    while (i < size - 1)
    {
        arr[i] = arr[i + 1];
        i++;
    }
    arr[size - 1] = temp;
}

void do_rev_rotate(int *arr, int size)
{
    int temp;
    int i;

    if (size < 2)
        return ;
    temp = arr[size - 1];
    i = size - 1;
    while (i > 0)
    {
        arr[i] = arr[i - 1];
        i--;
    }
    arr[0] = temp;
}

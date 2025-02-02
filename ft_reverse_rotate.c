/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_reverse_rotate.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sojammal <sojammal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/02 00:08:40 by sojammal          #+#    #+#             */
/*   Updated: 2025/02/02 00:49:36 by sojammal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void    ft_reverse_rotate(t_stack **stack)
{
    t_stack *temp;
    t_stack *last;
    t_stack *before_last;

    last = ft_last(*stack);
    before_last = ft_before_last(*stack);
    temp = *stack;
    *stack = last;
    (*stack)->next = temp;
    before_last->next = NULL;
}

void  ft_rra(t_stack **stack_a)
{
    ft_reverse_rotate(stack_a);
    ft_putstr_fd("rra\n", 1);
}

void  ft_rrb(t_stack **stack_b)
{
    ft_reverse_rotate(stack_b);
    ft_putstr_fd("rrb\n", 1);
}

void  ft_rrr(t_stack **stack_a, t_stack **stack_b)
{
    ft_reverse_rotate(stack_a);
    ft_reverse_rotate(stack_b);
    ft_putstr_fd("rrr\n", 1);
}
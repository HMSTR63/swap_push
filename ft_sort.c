/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sojammal <sojammal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/02 20:08:22 by sojammal          #+#    #+#             */
/*   Updated: 2025/02/02 23:16:29 by sojammal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int ft_find_high(t_stack *stack)
{
    int high;

    high = stack->value;
    while (stack)
    {
        if (stack->value > high)
            high = stack->value;
        stack = stack->next;
    }
    return (high);
}
void    ft_sort_three(t_stack **stack_a)
{
    int high;
    
    if (ft_is_sorted(*stack_a))
        return ;
    high = ft_find_high(*stack_a);
    if ((*stack_a)->value == high)
        ft_ra(stack_a);
    if ((*stack_a)->next->value == high)
        ft_rra(stack_a);
    if ((*stack_a)->value > (*stack_a)->next->value)
        ft_sa(stack_a);
}
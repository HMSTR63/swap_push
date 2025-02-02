/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sojammal <sojammal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/01 20:33:09 by sojammal          #+#    #+#             */
/*   Updated: 2025/02/02 00:49:48 by sojammal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void    ft_push(t_stack **src, t_stack **dest)
{
    t_stack *temp;

    if (!*src)
        return ;
    temp = (*src)->next;
    (*src)->next = *dest;
    *dest = *src;
    *src = temp;
}
void    ft_pa(t_stack **stack_a, t_stack **stack_b)
{
    ft_push(stack_b, stack_a);
    ft_putstr_fd("pa\n", 1);
}
void    ft_pb(t_stack **stack_a, t_stack **stack_b)
{
    ft_push(stack_a, stack_b);
    ft_putstr_fd("pb\n", 1);
}

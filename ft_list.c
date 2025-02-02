/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sojammal <sojammal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/01 22:16:40 by sojammal          #+#    #+#             */
/*   Updated: 2025/02/02 20:37:26 by sojammal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack    *ft_last(t_stack *stack)
{
    while (stack && stack->next)
        stack = stack->next;
    return (stack);
}
t_stack   *ft_before_last(t_stack *stack)
{
    while (stack && stack->next && stack->next->next)
        stack = stack->next;
    return (stack);
}
int ft_size(t_stack *stack)
{
    int size;

    size = 0;
    while (stack)
    {
        size++;
        stack = stack->next;
    }
    return (size);
}
void    ft_lst_add_back(t_stack **stack, t_stack *new)
{
    t_stack *last;

    if (!new)
        return ;
    if (!*stack)
    {
        *stack = new;
        return ;
    }
    last = ft_last(*stack);
    last->next = new;
}
t_stack *ft_lst_new(int value)
{
    t_stack *new;

    new = malloc(sizeof(t_stack));
    if (!new)
        return (NULL);
    new->value = value;
    new->index = 0;
    new->next = NULL;
    return (new);
}

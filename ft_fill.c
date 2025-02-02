/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fill.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sojammal <sojammal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/02 17:29:48 by sojammal          #+#    #+#             */
/*   Updated: 2025/02/02 22:22:10 by sojammal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void    ft_fill_stack(char **str, t_stack **stack)
{
    long int value;
    int i;

    *stack = NULL;
    i = 0;
    while (str[i])
    {
        value = ft_atoi(str[i]);
        ft_lst_new(value);
        ft_lst_add_back(stack, ft_lst_new(value));
        i++;
    }
}

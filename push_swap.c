/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sojammal <sojammal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/02 00:14:25 by sojammal          #+#    #+#             */
/*   Updated: 2025/02/02 23:24:57 by sojammal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void ft_push_swap(t_stack **stack_a, int size)
{
	if(size == 2 && !ft_is_sorted(*stack_a))
		ft_sa(stack_a);
	else if (size == 3 && !ft_is_sorted(*stack_a))
		ft_sort_three(stack_a);
	// else if (size > 3 && !ft_is_sorted(*stack_a))
	// 	ft_sort(stack_a, stack_b);
}
int main(int c, char **v)
{
	t_stack *stack_a;
	t_stack *stack_b;
	char	**str;

	stack_a = NULL;
	stack_b = NULL;
	if (c > 1)
	{
		str = ft_stack(v);
		ft_parsing(str);
		ft_fill_stack(str, &stack_a);
		ft_push_swap(&stack_a,  ft_size(stack_a));
		ft_free_stack(&stack_a);
		ft_free_stack(&stack_b);
	}
	return (1);
}
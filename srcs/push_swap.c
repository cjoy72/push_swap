/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbaroi <cbaroi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/18 15:04:53 by cbaroi            #+#    #+#             */
/*   Updated: 2024/07/18 15:11:27 by cbaroi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Header/push_swap.h"

int	main(int argc, char **argv)
{
	t_node	*a;
	t_node	*b;

	a = NULL;
	b = NULL;
	if (argc == 1 || (argc == 2 && !argv[1][0]))
		return (1);
	else if (argc == 2)
		argv = split(argv[1], ' ');
	init_stack_a(&a, argv + 1);
	if (!stack_sorted(a))
	{
		if (stack_len(a) == 2)
			sa(&a, false);
		else if (stack_len(a) == 3)
			sort_three(&a);
		else
			sort_stack(&a, &b);
	}
	free_stack(&a);
	return (0);
}

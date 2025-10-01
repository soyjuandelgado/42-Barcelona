/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap_main.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juadelga <juadelga@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/01 16:49:45 by juadelga          #+#    #+#             */
/*   Updated: 2025/10/01 16:49:50 by juadelga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "ft_swap.c"

int	main(void)
{
	int *a;
	int *b;
	int val_a;
	int val_b;

	val_a = 5;
	val_b = 7;
	a = &val_a;
	b = &val_b;
	ft_swap(a, b);
	printf("a = %d, b = %d\n", *a, *b);
	return(0);
}

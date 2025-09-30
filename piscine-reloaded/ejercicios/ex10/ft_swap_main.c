/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap_main.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juadelga <juadelga@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/18 10:37:26 by juadelga          #+#    #+#             */
/*   Updated: 2025/02/18 10:37:30 by juadelga         ###   ########.fr       */
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

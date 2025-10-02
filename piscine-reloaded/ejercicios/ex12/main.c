/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod_main.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juadelga <juadelga@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/01 16:50:46 by juadelga          #+#    #+#             */
/*   Updated: 2025/10/01 16:50:51 by juadelga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "ft_iterative_factorial.c"

int	main(void)
{
	printf("n=%d, res=%d", 5, ft_iterative_factorial(5));
	return (0);
}

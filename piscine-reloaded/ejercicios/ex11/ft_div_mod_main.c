/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod_main.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juadelga <juadelga@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/18 10:51:23 by juadelga          #+#    #+#             */
/*   Updated: 2025/02/18 11:48:55 by juadelga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "ft_div_mod.c"

int	main(void)
{
	int a;
	int b;
	int div;
	int mod;

	a = 7;
	b = 3;
	div=0;
	mod=0;
	ft_div_mod(a, b, &div, &mod);
	printf("div=%d, mod=%d", div, mod);
	return (0);
}

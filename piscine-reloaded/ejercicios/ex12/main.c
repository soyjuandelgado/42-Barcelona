/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juadelga <juadelga@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/01 16:50:46 by juadelga          #+#    #+#             */
/*   Updated: 2025/10/02 19:49:14 by juadelga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

#include "ft_iterative_factorial.c"

int	main(int argc, char **argv)
{
	if (argc != 2)
		printf("Usage: ft_iterative_factorial num\n");
	else
	{
		printf("n=%d, res=%d", atoi(argv[1]), ft_iterative_factorial(atoi(argv[1])));
	}
	return (0);
}

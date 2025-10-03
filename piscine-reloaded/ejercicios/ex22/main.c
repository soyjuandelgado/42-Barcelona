/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juadelga <juadelga@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/03 11:19:07 by juadelga          #+#    #+#             */
/*   Updated: 2025/10/03 11:19:46 by juadelga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include "ft_abs.h"

int	main(int argc, char **argv)
{
	if (argc != 2)
		printf("Usage: ft_abs num\n");
	else
	{
		printf("num:%d, abs:%d\n", atoi(argv[1]), ABS(atoi(argv[1])));
    }
}
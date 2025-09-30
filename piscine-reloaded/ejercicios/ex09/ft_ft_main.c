/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ft_main.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juadelga <juadelga@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/18 10:36:35 by juadelga          #+#    #+#             */
/*   Updated: 2025/02/18 10:36:46 by juadelga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "ft_ft.c"

int	main(void)
{
	int *nbr;
	int value;

	value = 20;
	nbr = &value;
	
	ft_ft(nbr);

	if (*nbr == 42)
		write(1, "OK\n", 3);
	else
		write(1, "KO\n", 3);
		
}

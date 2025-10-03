/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juadelga <juadelga@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/03 10:30:45 by juadelga          #+#    #+#             */
/*   Updated: 2025/10/03 10:50:28 by juadelga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	i;
	int	dif;
	int	*range;

	i = 0;
	dif = max - min;
	range = NULL;
	if (dif <= 0)
		return (NULL);
	range = malloc(sizeof(int) * dif);
	while (i < dif)
	{
		range[i] = min;
		min++;
		i++;
	}
	return (range);
}

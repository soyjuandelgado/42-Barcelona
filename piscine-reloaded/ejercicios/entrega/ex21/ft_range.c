/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juadelga <juadelga@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/03 10:30:45 by juadelga          #+#    #+#             */
/*   Updated: 2025/10/03 19:50:13 by juadelga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	i;
	int	dif;
	int	*range;

	i = 0;
	dif = 0;
	range = NULL;
	if (min >= max)
		return (NULL);
	dif = max - min;
	range = malloc(sizeof(int) * dif);
	if (!range)
		return (NULL);
	while (i < dif)
	{
		range[i] = min;
		min++;
		i++;
	}
	return (range);
}

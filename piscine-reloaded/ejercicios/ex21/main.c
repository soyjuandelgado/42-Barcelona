/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juadelga <juadelga@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/02 18:19:11 by juadelga          #+#    #+#             */
/*   Updated: 2025/10/03 10:53:56 by juadelga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	*ft_range(int min, int max);

int	main(int argc, char **argv)
{
	int	*res;
	int	i;

	res = NULL;
	i = 0;
	if (argc != 3)
		printf("Usage: ft_range min max\n");
	else
	{
		printf("s1:%s sp:%s\n", argv[1], argv[2]);
		res = ft_range(atoi(argv[1]), atoi(argv[2]));
		if (res != NULL)
		{
			while (res[i])
			{
				printf("res:%d\n", res[i]);
				i++;
			}
		}
	}
	return (0);
}

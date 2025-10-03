/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juadelga <juadelga@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/02 18:19:11 by juadelga          #+#    #+#             */
/*   Updated: 2025/10/03 10:28:19 by juadelga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h> //printf

char	*ft_strdup(const char *src);

int	main(int argc, char **argv)
{
	char	*res;

	res = NULL;
	if (argc != 2)
		printf("Usage: ft_strdmp s1\n");
	else
	{
		printf("s1:%s sp:%p\n", argv[1], &argv[1]);
		res = ft_strdup(argv[1]);
		printf("res:%s sp:%p\n", res, &res);
	}
	return (0);
}

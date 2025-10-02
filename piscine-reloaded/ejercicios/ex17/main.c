/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juadelga <juadelga@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/02 18:19:11 by juadelga          #+#    #+#             */
/*   Updated: 2025/10/02 18:20:00 by juadelga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h> //printf

int ft_strcmp(char *s1, char *s2);

int	main(int argc, char **argv)
{
	int	res;

	res = 0;
	if (argc != 3)
		printf("Usage: ft_strcmp s1 s2\n");
	else
	{
		printf("s1:%s\n", argv[1]);
		printf("s2:%s\n", argv[2]);
		res = ft_strcmp(argv[1], argv[2]);
		printf("res:%d\n", res);
	}
	return (0);
}

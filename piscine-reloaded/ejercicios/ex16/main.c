/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juadelga <juadelga@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/02 18:14:27 by juadelga          #+#    #+#             */
/*   Updated: 2025/10/02 18:15:09 by juadelga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_strlen(char *str);

int	main(void)
{
	char *str;
	int	len;

	str = "Hola Mundo!";
	len = ft_strlen(str);
	printf("len=%d", len);
	return (0);
}

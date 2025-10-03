/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juadelga <juadelga@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/03 11:29:41 by juadelga          #+#    #+#             */
/*   Updated: 2025/10/03 11:30:31 by juadelga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_count_if(char **tab, int (*f)(char*));
int	ft_strcmp(char *s1, char *s2);

int func(char * c)
{
	if (! ft_strcmp(c, "OK"))
		return (1);
	else
		return (0);
}

int	main(void)
{
	char *tab[5];
	int	res;
	
	res = 0;
	tab[0] = "OK";
	tab[1] = "OK";
	tab[2] = "OK";
	tab[3] = "b";
	tab[4] = NULL;
	
	res = ft_count_if(tab, &func);

	printf("res = %d\n", res);	

	return (0);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juadelga <juadelga@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/02 18:17:17 by juadelga          #+#    #+#             */
/*   Updated: 2025/10/02 18:22:14 by juadelga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	int	i;
	int	res;
	int	cont;

	i = 0;
	res = i;
	cont = 1;
	while (cont == 1 && res == 0)
	{
		if (s1[i] == '\0' || s2[i] == '\0')
			cont = 0;
		res = s1[i] - s2[i];
		i++;
	}
	return (res);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juadelga <juadelga@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/01 18:48:03 by juadelga          #+#    #+#             */
/*   Updated: 2025/10/02 19:59:54 by juadelga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int		res;

	res = 1;
	if (nb < 0 || nb > 12)
		return (0);
	while (nb > 0)
	{
		res = res * nb;
		nb--;
	}
	return (res);
}

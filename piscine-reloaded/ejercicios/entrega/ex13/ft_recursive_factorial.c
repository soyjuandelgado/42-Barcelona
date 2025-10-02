/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juadelga <juadelga@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/02 17:43:41 by juadelga          #+#    #+#             */
/*   Updated: 2025/10/02 20:00:50 by juadelga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	int		res;

	res = 1;
	if (nb < 0 || nb > 12)
		return (0);
	if (nb > 1)
	{
		res = nb * ft_recursive_factorial(nb - 1);
		nb--;
	}
	return (res);
}

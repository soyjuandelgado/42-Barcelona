/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juadelga <juadelga@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/02 17:43:41 by juadelga          #+#    #+#             */
/*   Updated: 2025/10/02 17:46:09 by juadelga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	int		res;

	res = 0;
	if (nb > 0)
	{
		res = nb + ft_recursive_factorial(nb - 1);
		nb--;
	}
	return (res);
}

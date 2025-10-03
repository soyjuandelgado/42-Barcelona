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


void ft_foreach(int *tab, int length, void (*f)(int));
void	ft_putnbr(int nb);

int	main(void)
{
	int tab[5];
	
	tab[0] = 0;
	tab[1] = 1;
	tab[2] = 2;
	tab[3] = 3;
	tab[4] = 4;
	
	ft_foreach(tab, 5, &ft_putnbr);

	return (0);
}

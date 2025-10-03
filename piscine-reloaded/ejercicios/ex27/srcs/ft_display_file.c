/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juadelga <juadelga@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/03 18:26:44 by juadelga          #+#    #+#             */
/*   Updated: 2025/10/03 18:44:00 by juadelga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_display_file.h"

int	main(int argc, char **argv)
{
	if (argc == 1)
	{
		ft_putstr("File name missing.");
		return (0);
	}
	if (argc > 2)
	{
		ft_putstr("Too many arguments.");
		return (0);
	}
	ft_putstr("Cannot read file.");
}

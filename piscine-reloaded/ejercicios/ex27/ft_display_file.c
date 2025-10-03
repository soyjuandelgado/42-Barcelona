/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juadelga <juadelga@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/03 18:26:44 by juadelga          #+#    #+#             */
/*   Updated: 2025/10/03 20:55:04 by juadelga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include <unistd.h>
#include "ft_display_file.h"

#define BUFFER_SIZE 1024

void	ft_display_file(char *file)
{
	int		fd;
	int		bytes;
	char	buffer[BUFFER_SIZE];

	bytes = 0;
	fd = open(file, O_RDONLY);
	if (fd < 0)
		ft_putstr("Cannot read file.\n");
	bytes = read(fd, buffer, BUFFER_SIZE);
	while (bytes > 0)
	{
		write(1, buffer, bytes);
		bytes = read(fd, buffer, BUFFER_SIZE);
	}
	close(fd);
}

int	main(int argc, char **argv)
{
	int	fd;

	fd = 0;
	if (argc == 1)
	{
		ft_putstr("File name missing.\n");
		return (0);
	}
	if (argc > 2)
	{
		ft_putstr("Too many arguments.\n");
		return (0);
	}
	ft_display_file(argv[1]);
}

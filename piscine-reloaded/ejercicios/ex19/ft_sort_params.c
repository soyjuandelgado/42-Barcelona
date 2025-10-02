/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juadelga <juadelga@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/02 18:25:50 by juadelga          #+#    #+#             */
/*   Updated: 2025/10/02 19:53:42 by juadelga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (*(str + i) != '\0')
	{
		ft_putchar(*(str + i));
		i++;
	}
}

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

void    ft_strswap(char **s1, char **s2)
{
    char    *tmp;

    if (!s1 || !s2)
        return ;
    tmp = *s1;
    *s1 = *s2;
    *s2 = tmp;
}

int	main(int argc, char **argv)
{
	int	i;

	i = 2;
	while (i < argc)
	{
		if ((ft_strcmp(argv[i - 1], argv[i]) > 0)
			ft_strswap(argv[i - 1], argv[i]);
		i++;
	}
    i = 1;
    while (i < argc)
    {
        ft_putstr(argv[i]);
        ft_putchar('\n');
        i++;
    }
	return (0);
}

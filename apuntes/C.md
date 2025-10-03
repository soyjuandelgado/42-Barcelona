## Crear macro

```c
#define ABS(Value) ((Value) < 0 ? (Value) * -1 : Value)
```

## Crear cabecera .h

```c
#ifndef FT_POINT_H
# define FT_POINT_H

typedef struct s_point
{
	int	x;
	int	y;
}		t_point;

#endif

```

```c
#ifndef LIBFT_H
# define LIBFT_H

void	ft_putchar(char c);
void	ft_putstr(char *str);
int		ft_strcmp(char *s1, char *s2);
int		ft_strlen(char *str);
void	ft_swap(int *a, int *b);

#endif
```
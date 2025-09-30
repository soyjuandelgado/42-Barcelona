void	ft_swap(int *a, int *b)
{
	int	val_a;
	int	val_b;

	val_a = *a;
	val_b = *b;
	*a = val_b;
	*b = val_a;
}
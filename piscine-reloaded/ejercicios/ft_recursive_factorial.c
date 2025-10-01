int ft_recursive_factorial(int nb)
{
    int res;

    res = 0;
    if (nb > 0)
    {
       res = nb + ft_recursive_factorial(--nb);
    }
    return (res);
}

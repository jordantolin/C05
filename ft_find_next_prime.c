int ft_is_prime(int nb)
{
    int divisor;
    if (nb <= 1)
    {
        return (0);
    }
    divisor = 2;
    while (divisor * divisor <= nb)
    {
        if (nb % divisor == 0)
        {
            return (0);
        }
        divisor++;
    }
    return (1);
}

int ft_find_next_prime(int  nb)
{
    while (1)
    {
        if (ft_is_prime(nb))
        {
            return (nb);
        }
        nb++;
        if (nb >= 2147483647)
            return (-1);
    }
}

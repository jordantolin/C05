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

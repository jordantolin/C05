int ft_iterative_power(int  nb, int power)
{
    int res;
    if (nb == 0 && power == 0)
    {
        return (1);
    }
    if (power < 0)
    {
        return (0);
    }
    res = 1;
    while (power > 0)
    {
        res *= nb;
        power--;
    }
    return (nb < 0 && (power + 1) % 2 == 0) ? -res : res;
}

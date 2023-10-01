int ft_iterative_factorial(int  nb)
{
    //Gestisco il caso in cui l'argomento non è valido
    if (nb < 0)
        return (0);

    int result;

    result = 1;
    while (nb > 0)
    {
        result *= nb;
        nb--;
    }
    return (result);
}

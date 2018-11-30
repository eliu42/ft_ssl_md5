long long	ft_expn(int base, int power)
{
	long long	res;

	if (power == 0)
	{
		return (1);
	}
	res = base;
	while (power--)
		res = res * base;
	return (res);
}

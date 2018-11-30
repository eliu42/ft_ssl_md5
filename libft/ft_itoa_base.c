#include <stdlib.h>

char*	ft_itoa_base(int n, int base)
{
	char		*str;
	unsigned int	u;
	int		copy;
	int		len;

	copy = n;
	len = 1;
	while (n /= base)
		len++;
	if (base == 10 && copy < 0)
	{
		len++;
		u = -n;
	}
	str = (char*)malloc(sizeof(char*) * (len));
	str[len--] = n % base + '0';
	while (u /= base)
		str[len--] = n % base + '0';
	return (str);
}

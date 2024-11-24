#include "cns_math.h"

int	cns_isprime(int nbr)
{
	int	i;

	i = 2;
	if (nbr <= 1)
		return (0);
	while (i <= nbr / i)
	{
		if (nbr % i == 0)
			return (0);
		i++;
	}
	return (1);
}


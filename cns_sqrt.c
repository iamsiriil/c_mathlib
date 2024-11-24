#include "cns_math.h"

int	cns_sqrt(int nbr)
{
	int	n;

	if (nbr == 0)
		return (0);
	n = 1;
	while (n < nbr / n)
		n++;
	if (n * n == nbr)
		return (n);
	return (0);
}


#include "cns_math.h"

int	cns_getnprime(void)
{
	static int	n = 0;

	while (!cns_isprime(++n));
	return (n);
}


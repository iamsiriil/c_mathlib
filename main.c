#include "cns_math.h"

int	main(void)
{
	fflush(stdout);
	int		*pfact;
	long int	nbr = 13984;

	pfact = cns_primefact(nbr);

	for (int i = 0; pfact[i] != 0; i++)
		printf("%d\n", pfact[i]);

	free(pfact);

	return (0);
}

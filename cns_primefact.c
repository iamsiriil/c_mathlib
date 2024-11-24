#include "cns_math.h"

static int	*cns_addprime(int *arr, int prm)
{
	static int	size = 0;
	int		*new_arr;

	size++;
	new_arr = (int *)malloc(sizeof(int) * size);
	if (!new_arr)
		return (NULL);
	if (!arr)
	{
		new_arr[0] = prm;
		return (new_arr);
	}
	int	i = 0;
	while (i < size - 1)
	{
		new_arr[i] = arr[i];
		i++;
	}
	new_arr[i] = prm;
	free(arr);
	return (new_arr);
}

int	*cns_primefact(long int nbr)
{
	int	prm = cns_getnprime();
	int	*prmarr = NULL;

	while (nbr != 1)
	{
		if (nbr % prm == 0)
		{
			prmarr = cns_addprime(prmarr, prm);
			nbr /= prm;
		}
		else
			prm = cns_getnprime();
	}
	return (prmarr);
}



#include <limits.h>

static int	ft_check_overflow(long overflow, int positive)
{
	if (overflow < INT_MIN || overflow == INT_MIN && positive == 1)
	{
		if (positive == 1)
			return (-1);
		else
			return (0);
	}
	return (2);
}

int	ft_atoi(const char *nptr)
{
	int			positive;
	long 		rval;

	rval = 0;
	positive = 1;
	while ((*nptr > 8 && *nptr < 14) || (*nptr == 32))
		nptr++;
	if (*nptr == '-')
	{
		positive = 0;
		nptr++;
	}
	else if (*nptr == '+')
		nptr++;
	while (*nptr >= '0' && *nptr <= '9')
	{
		rval = rval * 10 - (*nptr - '0');
		if (ft_check_overflow(rval, positive) != 2)
			return (ft_check_overflow(rval, positive));
		nptr++;
	}
	if (positive == 1)
		return (rval * -1);
	else
		return (rval);
}

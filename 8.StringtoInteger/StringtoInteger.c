#include <limits.h>

int	myAtoi(char* s) {
	int		i = 0;
	long	res = 0;
	int		sign = 1;

	while (s[i] == ' ' || (s[i] >= 9 && s[i] <= 13))
		i++;
	if (s[i] == '-' || s[i] == '+')
	{
		if (s[i] == '-')
			sign *= -1;
		i++;
	}
	while (s[i] >= '0' && s[i] <= '9')
	{
		res = res * 10 + (s[i] - 48);
		if ((res * sign) > INT_MAX)
			return (INT_MAX);
		if ((res * sign) < INT_MIN)
			return (INT_MIN);
		i++;
	}
	return (sign * res);
}

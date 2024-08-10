int	climbStairs(int n)
{
	int	first = 0;
	int	second = 1;
	int	stairs;
	int	i = 0;

	while (i < n)
	{
		stairs = first + second;
		first = second;
		second = stairs;
		i++;
	}
	return (stairs);
}

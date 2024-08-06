int	mySqrt(int x)
{
	int	left = 1;
	int	right = x / left;
	int	res = 0;

	if (x < 2)
		return (x);
	while (left <= right)
	{
		int	mid = left + (right - left) / 2;
		if (mid == x / mid)
			return (mid);
		else if (mid < x / mid)
		{
			left = mid + 1;
			res = mid;
		}
		else
			right = mid - 1;
	}
	return (res);
}

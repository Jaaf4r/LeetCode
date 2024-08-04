int	minimumOperations(int* nums, int numsSize)
{
	int	i = 0;
	int	c = 0;

	while (i < numsSize)
	{
		if (nums[i] == 1)
		{
			nums[i] -= 1;
			c++;
		}
		else if (nums[i] != 1 && nums[i] % 3 != 0) {
			nums[i] += 1;
			c++;
		}
		i++;
	}
	return (c);
}

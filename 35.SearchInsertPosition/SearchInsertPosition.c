int searchInsert(int* nums, int numsSize, int target)
{
	int	i = 0;
	int	bigger_n = 0;

	while (i < numsSize)
	{
		if (nums[i] == target)
			return (i);
		else if (nums[i] > target)
		{
			bigger_n = i;
			break;
		}
		i++;
	}
	return (i);
}

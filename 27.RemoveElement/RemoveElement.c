int	removeElement(int* nums, int numsSize, int val)
{
	int	i = 0;
	int	k = 0;

	while (i < numsSize)
	{
		if (nums[i] != val)
		{
			nums[k++] = nums[i];
		}
		i++;
	}
	return (k);
}

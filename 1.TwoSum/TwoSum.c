/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int	*twoSum(int* nums, int numsSize, int target, int* returnSize) {
	int	i;
	int	j;
	int	*arr;

	i = 0;
	arr = malloc(sizeof(int) * 2);
	if (!arr)
		return (0);
	while (i < numsSize - 1)
	{
		j = i + 1;
		while (j < numsSize)
		{
			if (nums[i] + nums[j] == target)
			{
				arr[0] = i;
				arr[1] = j;
				*returnSize = 2;
				return (arr);
			}
			j++;
		}
		i++;
	}
	*returnSize = 0;
	return (0);
}

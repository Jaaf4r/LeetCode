/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int	*buildArray(int* nums, int numsSize, int* returnSize)
{
	int	i;
	int	*ans;

	*returnSize = numsSize;
	ans = malloc(sizeof(int) * numsSize);
    if (!ans)
        return (0);
    i = 0;
	while (i < numsSize)
	{
		ans[i] = nums[nums[i]];
		i++;
	}
	return (ans);
}

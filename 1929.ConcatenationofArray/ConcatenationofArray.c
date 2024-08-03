/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int	*getConcatenation(int* nums, int numsSize, int* returnSize)
{
	int	*ans;
	int	i;

	ans = malloc(sizeof(int) * numsSize * 2);
	i = 0;
	*returnSize = numsSize * 2;

	while (i < numsSize)
	{
		ans[i] = nums[i];
		ans[i + numsSize] = nums[i];
		i++;
	}
	return (ans);
}

/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int	*plusOne(int* digits, int digitsSize, int* returnSize)
{
	int	i = digitsSize - 1;

	while (i >= 0)
	{
		if (digits[i] < 9)
		{
			digits[i] += 1;
			*returnSize = digitsSize;
			int	*new = malloc(sizeof(int) * digitsSize);
			if (!new)
				return (NULL);
			int	j = 0;
			while (j < digitsSize)
			{
				new[j] = digits[j];
				j++;
			}
			return (new);
		}
		digits[i] = 0;
		i--;
	}
	*returnSize = digitsSize + 1;
	int *new = malloc(sizeof(int) * (digitsSize + 1));
	if (!new)
		return (NULL);
	new[0] = 1;
	i = 1;
	while (i <= digitsSize)
	{
		new[i] = 0;
		i++;
	}
	return (new);
}

char	*kthDistinct(char** arr, int arrSize, int k)
{
	int	distStr = 0;
	int	i = 0;

	while (i < arrSize)
	{
		int	isDist = 1;
		int	j = 0;
		while (j < arrSize)
		{
			if (strcmp(arr[i], arr[j]) == 0 && i != j)
			{
				isDist = 0;
				break;
			}
			j++;
		}
		if (isDist == 1)
		{
			distStr++;
			if (distStr == k)
				return (arr[i]);
		}
		i++;
	}
	return ("");
}

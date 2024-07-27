#include <string.h>

char*	longestCommonPrefix(char** strs, int strsSize) {
	int		i;
	int		ipr;
	int		j;
	char    *pr;

	i = 0;
	ipr = 0;
	pr = malloc(500);
	if (!pr)
		return (NULL);
	while (strs[0][i])
	{
		j = 1;
		while (j < strsSize)
		{
			if (strs[j][i] != strs[0][i])
			{
				pr[ipr] = '\0';
				return (pr);
			}
			j++;
		}
		pr[ipr] = strs[0][i];
		ipr++;
		i++;
	}
	pr[ipr] = '\0';
	return (pr);
}

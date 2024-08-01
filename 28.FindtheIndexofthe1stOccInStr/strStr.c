int	strStr(char* haystack, char* needle)
{
	int	i;
	int	j;

	i = 0;
	if (!needle)
		return (-1);
	while (haystack[i] != '\0')
	{
		j = 0;
		while (haystack[i + j] == needle[j] && haystack[i + j])
			j++;
		if (needle[j] == '\0')
			return (i);
		i++;
	}
	return (-1);
}

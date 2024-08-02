int	lengthOfLastWord(char* s)
{
	int	i = 0;
	int	c = 0;

	while (s[i])
		i++;
	while (i > 0 && s[i - 1] == ' ')
		i--;
	while (i > 0 && s[i - 1] != ' ')
	{
		i--;
		c++;
	}
	return (c);
}

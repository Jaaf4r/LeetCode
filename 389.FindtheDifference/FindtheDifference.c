char	findTheDifference(char* s, char* t)
{
	if (!s)
		return (*t);

	int	m[256] = {0};

	while (*s)
	{
		m[*s]++;
		s++;
	}
	while (*t)
	{
		m[*t]--;
		if (m[*t] < 0)
			return (*t);
		t++;
	}
	return ('\0');
}

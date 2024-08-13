bool	isAnagram(char* s, char* t)
{
	int	m[256] = {0};

	if (strlen(s) != strlen(t))
		return (false);

	while (*s)
	{
		m[*s]++;
		s++;
	}
	while (*t)
	{
		m[*t]--;
		if (m[*t] < 0)
			return (false);
		t++;
	}
	return (true);
}

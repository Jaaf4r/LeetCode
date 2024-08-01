int	countSeniors(char ** details, int detailsSize)
{
	int		i;
	int		j;
	int		count;
	char	age[3];

	i = 0;
	count = 0;
	while (i < detailsSize)
	{
		age[0] = details[i][11];
		age[1] = details[i][12];
		age[2] = '\0';
		if (atoi(age) > 60)
			count++;
		j = 0;
		while (age[j])
		{
			age[j++] = '\0';
		}
		i++;
	}
	return (count);
}

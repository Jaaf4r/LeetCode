bool	isValid(char* s) {
	int		len = strlen(s);
	char	stack[len];
	int		top;
	int		i;

	top = -1;
	i = 0;
	while (i < len)
	{
		if (s[i] == '(' || s[i] == '{' || s[i] == '[')
			stack[++top] = s[i];
		else
		{
			if (top == -1)
				return (false);
			if ((s[i] == ')' && stack[top--] != '(')
			|| (s[i] == '}' && stack[top--] != '{')
			|| (s[i] == ']' && stack[top--] != '['))
				return (false);
		}
		i++;
	}
	return (top == -1);
}

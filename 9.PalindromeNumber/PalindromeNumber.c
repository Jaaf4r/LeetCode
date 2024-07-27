bool isPalindrome(int x) {
	unsigned int org = x;
	unsigned rev = 0;
	unsigned int tmp;
	if (x < 0)
		return (false);
	else
	{
		while (org != 0)
		{
			tmp = org % 10;
			rev = (rev * 10) + tmp;
			org /= 10;
		}
	}
	return (x == rev);
}

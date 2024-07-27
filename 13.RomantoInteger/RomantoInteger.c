int romanToInt(char* s) {
	int i = 0;
	int res = 0;
	int m[256];

	m['I'] = 1;
	m['V'] = 5;
	m['X'] = 10;
	m['L'] = 50;
	m['C'] = 100;
	m['D'] = 500;
	m['M'] = 1000;

	while (s[i])
	{
	   if (m[s[i]] < m[s[i+1]]) {
			res -= m[s[i]];
	   }
	   else {
			res += m[s[i]];
	   }
	   i++;
	}
	return (res);
}

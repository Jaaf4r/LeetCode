#include <string.h>

char * mergeAlternately(char * word1, char * word2) {
	char	*merged;
	char	*d = (merged = malloc(sizeof(char) * (strlen(word1) + strlen(word2) + 1)));
	if (!merged)
		return (NULL);

	while (*word1 || *word2)
	{
		if (*word1)
			*d++ = *word1++;
		if (*word2)
			*d++ = *word2++;
	}
	*d = '\0';
	return (merged);
}

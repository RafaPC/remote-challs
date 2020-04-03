#include <string.h>

int hv_necklace(char *s1, char *s2)
{
	int index1;
	int index2;
	int tries;

	index1 = index2 = 0;
	tries = 0;
	if (*s1 == '\0' && *s1 == *s2)
		return (1);
	if (strlen(s1) == strlen(s2))
	{
		while (tries < strlen(s1))
		{
			while (s1[index1] == s2[index2])
			{
				index1++;
				index2++;
				//If the first string reaches the null character it means string2 is string1 slid
				if (s1[index1] == '\0')
					return (1);
				// When the second string reaches the null character it goes to the start
				if (s2[index2] == '\0')
					index2 = 0;
			}
			index1 = 0;
			index2 = ++tries;
		}
	}
	return (0);
}

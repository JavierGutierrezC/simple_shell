#include "shellib.h"







void _stat(char **bftoken, char **pat)
{
	char *newval = NULL;
	int x;

	struct stat sb;

	for (x=1; pat[x] != NULL; x++)
	{
		newval = str_concat((str_concat(pat[x], "/")), *bftoken);

		if (stat(newval, &sb) == 0)
		{
			bftoken[0] = newval;
		}
	}
}

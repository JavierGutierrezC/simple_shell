#include "shellib.h"

/**
 * findpath - ...
 * @environ: ...
 *
 * Return: tokpa
 **/
char **findpath(char **environ)
/**int main(void)*/
{
	int x;
	char **tokpa;

	for (x = 0 ; environ[x] != NULL ; x++)
	{
	/**printf("%s\n", environ[x]);*/
		if (environ[x][0] == 'P' && environ[x][2] == 'T')
		{
		/**printf("%s\n", environ[x]);*/
			tokpa = usepath(environ[x]);
			return (tokpa);
		}
	}

}

/**
 * usepath - ...
 * @fpat: ...
 *
 * Return: tokpa
 **/
char **usepath(char *fpat)
{
	int count = 0;
	char *usep;
	char **tokpat = malloc(sizeof(char *) * 64);
	char *fpat_copy;

	if (tokpat == NULL)
		return (NULL);

	fpat_copy = _strdup(fpat);
	usep = strtok(fpat_copy, "=:");

	while (usep != NULL)
	{
		tokpat[count] = usep;
		/**printf("%s\n", tokpat[count]);*/
		count++;
		usep = strtok(NULL, "=:");
	}
	return (tokpat);
}

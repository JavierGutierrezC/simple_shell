#include "shellib.h"

/**
 * findpath - gets the path to execute commands
 * @environ: Env variables as a pointer
 *
 * Return: tokpa
 **/
char **findpath(char **environ)
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
			/**return (tokpa);*/
		}
	}
	return (tokpa);
}

/**
 * usepath - creates tokens form the directory PATH
 * @fpat: Path variables in form of pointers
 *
 * Return: tokpa
 **/
char **usepath(char *fpat)
{
	int count = 0;
	char *usep = NULL;
	char **tokpat = _calloc(sizeof(char *), 64);
	char *fpat_copy = NULL;

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

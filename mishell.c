#include "shellib.h"

/**
 * main -
 **/

int main(int ac, char *av[], char **environ)
{

	char *bf, **bftoken, **pat, *env;
	size_t characters, bfsize = 0;

	while (1)
	{

		write(1,"mastershell$ ", 13);
		characters = getline(&bf, &bfsize, stdin);

		if (characters == -1)
		{
			if (ac != 1)
				perror("error");

			return (1);
		}

		if (*bf != '\n' && (strcmp(bf,"env\n") != 0))
		{
			bftoken = linetoken(bf);
			pat = findpath(environ);
			_stat(bftoken, pat);
			exefork(bftoken);
		}
		if ((strcmp("env\n", bf)) == 0)
		{
			find_env(environ);
		}
	}
	/**free(bf);
	 *free(bftoken);
	 *free(pat);
	 *free(env);
	 *free(characters);*/
	return (0);
}

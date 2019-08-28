#include "shellib.h"

/**
 * find_env - Get environment variables
 * @environ: Environment variables
 **/
void find_env(char **environ)
{
	int x;

	for (x = 0 ; environ[x] ; x++)
	{
		/**printf("%s\n", environ[x]);*/
		_puts(environ[x]);
	}
}

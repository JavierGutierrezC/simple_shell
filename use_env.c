#include "shellib.h"

/**
 * find_env - ...
 * @environ: ...
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

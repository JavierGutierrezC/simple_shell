#include "shellib.h"
/**
 *
 *
 *
 *
 *
 */

char **linetoken(char *linea)
{
	int count = 0;
	char *line;
	char **buffer = malloc(sizeof(char *) * 64);

if (buffer == NULL)
	return (NULL);

line =	strtok(linea, " \n\t\r\a");

while(line != NULL)
{
	buffer[count] = line;
	/**printf("%s\n", buffer[count]);*/
	count++;
	line = strtok(NULL, " \n\t\r\a");
}
return (buffer);
}

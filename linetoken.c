#include "shellib.h"
/**
 * linetoken - breaks the line from prompt into tokens
 * @linea: line from getline
 *
 * Return: buffer which is an array of pointers
 **/

char **linetoken(char *linea)
{
	int count = 0;
	char *line;
	char **buffer = _calloc(sizeof(char *), 64);

	if (buffer == NULL)
		return (NULL);

	line =	strtok(linea, " \n\t\r\a");

	while (line != NULL)
	{
		buffer[count] = line;
		/**printf("%s\n", buffer[count]);*/
		count++;
		line = strtok(NULL, " \n\t\r\a");
	}
	if (buffer[0] == NULL)
		buffer[count] = "\n";
	if ((_strcmp(buffer[0], "exit") == 0) && buffer[1] == NULL)
	{
		free(buffer);
		free(linea);
		exit(0);
	}
	return (buffer);
}

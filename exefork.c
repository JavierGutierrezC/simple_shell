#include "shellib.h"

/**
 * exefork - Starts a second process to be able to execute another one
 * @bftoken: Process to execute via pointers
 * @goesin: If process does happen then execute
 * @environ: Environment variables
 *Return: 0
 **/
int exefork(char **bftoken, int goesin, char **environ)
{
	pid_t child_pid;
	int status;

	/*if (bftoken == NULL) */
	/*return (-1); */
	child_pid = fork();

	if (child_pid < 0)
	{
		perror("./hsh: ");
		exit(1);
	}
	else if (child_pid == 0)
	{
		if (execve(bftoken[0], bftoken, environ) == -1)
		{
			perror("./hsh: ");
			free(bftoken);
			exit(1);
		}
	}
	else
	{
		if (goesin == 1)
			free(bftoken[0]);
		/* free(bftoken[0]); */
		free(bftoken);
		wait(&status);
	}
	return (0);
}

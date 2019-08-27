#include "shellib.h"

/**
 *
 **/
int exefork(char **bftoken)
{
        pid_t child_pid;
        int status;

        if (bftoken == NULL)
                return (-1);

        child_pid = fork();

        if (child_pid < 0)
        {
                perror("Error");
                exit(1);
			}
        else if (child_pid == 0)
        {
                if (execve(bftoken[0], bftoken, NULL) == -1)
			perror("hola");
		exit(1);

        }
        else
        {
                child_pid = wait(&status);
		/*free(bftoken);*/
        }

}

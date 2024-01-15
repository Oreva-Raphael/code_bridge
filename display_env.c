#include "main.h"
<<<<<<< HEAD
/**
 * display_env - function to display the enviornment
 *
 * @input: the right command.
 *
*/
void display_env(char *input)
{
	char *environment[ENV_MAX_SIZE];
	char *built_in = "env";
	int i = 0;
	int w;

	if (_strcmp(input, built_in) == 0)
	{
		extern char **environ;

		while (environ[i] != NULL && i < ENV_MAX_SIZE - 1)
		{
			environment[i] = environ[i];
			i++;
		}
		environment[i] = NULL;

		for (w = 0; environment[w] != NULL; w++)
		{
			printf("%s\n", environment[w]);
		}
	}
=======

void display (char *input, char **envp)
{
    char *built_in = "env";
    int i;

    if(_strcmp(input, built_in) == 0)
    {
        for(i = 0; envp[i] != NULL; i++)
        {
            printf("%s\n", envp[i]);
        }
    }
>>>>>>> bbcc6e6 (testing the envp)
}

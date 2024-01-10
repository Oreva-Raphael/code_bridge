#include "main.h"

/**
 * tokenize_input - splits a string of characters into seperate words
 * @input: the string of character
 * @arg_count: the number of argument in the string
 * Return: array of strings
*/

char **tokenize_input(char *input, size_t *arg_count)
{
	size_t capacity = 10; //initial size to be dynamically allocated
	char *token, **args = malloc(capacity * sizeof(char *));

	if (!args)
	{
		perror("malloc");
		exit(EXIT_FAILURE);
	}

	*arg_count = 0;
	token = strtok(input, " ");

	while (token != NULL)
	{
		args[*arg_count] = _strdup(token);
		(*arg_count)++;
		token = strtok(NULL, " ");
	}
	args[*arg_count] = NULL;

	return (args);
}

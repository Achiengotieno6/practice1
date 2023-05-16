#include "shell.h"

int main(int argc, char **argv)
{
	char  *command;

	do
	{
		print_prompt();
		command = read_command();
		if (!command)
		{
			exit(EXIT_SUCCESS);
		}
		if (command[0] == '\0' || _strcmp(command, '\n') == 0)
		{
			free(command);
			continue;
		}
		if (_strcmp(command, "exit\n") == 0)
		{
			free(command);
			break;
		}
		write(STDOUT_FILENO, command, _strlen(command));
		free(command);
	}
	while (1);
	exit(EXIT_SUCCESS);
}
void print_prompt(void)
{
	char prompt[] = "$";
	write(STDERR_FILENO, prompt, sizeof(prompt) -1);
}
char *read_command(void)
{
	char buf[1024];
	char *ptr = NULL;
	char ptrlen = 0;
	size_t buflen;
	char *ptr2;

	while (getline(&buf, &(size_t){1024}, stdin) != -1)
	{
		buflen = _strlen(buf);
		if (!ptr)
		{
			ptr = malloc(buflen + 1);
		}
		else
		{
			ptr2 = realloc(ptr, ptrlen + buflen + 1);
			if(ptr2)
			{
				ptr =ptr2;
			}
			else
			{
				free(ptr);
				ptr = NULL;
			}
		}
		if(!ptr)
		{
			perror("allocation failed");
			return (NULL);
		}
		_strncpy(ptr + ptrlen, buf);
		ptrlen += buflen;
	}
	return (ptr);

}

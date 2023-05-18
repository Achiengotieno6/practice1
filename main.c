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
		if (command[0] == '\0' || _strcmp(command, "\n") == 0)
		{
			free(command);
			continue;
		}
		if (_strcmp(command, "exit\n") == 0)
		{
			free(command);
			break;
		}
		write(1, command, 1024);
		write(1, "\n", 1);
		free(command);
	}
	while (1);
	exit(EXIT_SUCCESS);
}
void print_prompt(void)
{
	write(2, "$ ", 2);
}
char *read_command(void)
{
	char buf[1024];
       	char *ptr = NULL;
	char ptrlen =0; 
	char *temp;
	int buflen = _strlen(buf);
	size_t bufadd = buflen;

	while (getline(&ptr, &bufadd, stdin))
	{	
		if (!ptr)
			ptr = malloc(buflen + 1);
		else
		{
			temp = malloc(ptrlen + buflen + 1);
			if(temp)
			{
				_strncpy(temp, ptr, ptrlen);
				free(ptr);
				ptr = temp;
			}
			else
			{
				free(ptr);
				perror("allocatopn failed");
				return (NULL);
			}
		}
		if (!ptr)
		{
			perror("allocation failed");
			return (NULL);
		}
		_strncpy(ptr + ptrlen, buf, buflen);
		if (buf[buflen - 1] == '\n')
		{
			if(buflen == 1 || buf[buflen-2] != '\\')
				return (ptr);
		}
		ptrlen += buflen;
	}
	return (ptr);
}

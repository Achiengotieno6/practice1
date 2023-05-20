#include "shell.h"

int main(int argc, char **argv)
{
	char  *command;

	do
	{
		print_prompt1();
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

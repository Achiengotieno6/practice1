#include "shell.h"

char *read_command(void)
{
	char *buf = NULL;
       	char *ptr = NULL;
	char *temp;
	size_t ptrlen, i;
	ssize_t buflen;
	size_t bufsize = 0;

	while (buflen = getline(&buf, &bufsize, stdin) != -1)
	{
		if (!ptr)
			ptr = malloc(buflen + 1);
		else
		{
			temp = malloc(ptrlen + buflen + 1);
			if(temp)
			{
				for (i = 0; i < ptrlen; i++)
					temp[i] = ptr[i];
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
			free(buf);
			return (NULL);
		}
		_strncpy(ptr + ptrlen, buf, buflen);
		if (buf[buflen - 1] == '\n')
		{
			if(buflen == 1 || buf[buflen-2] != '\\')
			{
				free(buf);
				return (ptr);
			}
			ptr[ptrlen + buflen - 2] = '\0';
			buflen -= 2;
			print_prompt2();
		}
		ptrlen += buflen;
	}
	free(buf);
	return (ptr);
}

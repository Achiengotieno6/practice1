#include <stdio.h>
#include "shell.h"

void print_prompt1(void)
{
	write(2, "# ", 2);
}
void print_prompt2(void)
{
	write(2, "> ", 2);
}

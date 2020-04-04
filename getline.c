#include <stdio.h>
#include <stdlib.h>

void main()
{
	size_t tam_line = 0;
	printf("$ ");

	tam_line = getByChars();
	printf("\n")
}

int getByChars()
{
	int c;
	size_t chars = 0;

	c = getchar( );

	for(; (c != -1); chars++)
	{
		putchar(c);
		c = getchar();
	}
	return (chars);
}

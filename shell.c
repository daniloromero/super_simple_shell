#include <stdio.h>
#include <stdlib.h>

int main()
{
	char *save_line = NULL;
	size_t tm_line = 0;
	size_t num_chars = 0;
	int i;

		printf("$ ");

		num_chars = getline(&save_line, &tm_line, stdin);

		while(num_chars != -1)
		{
			for (i = 0; save_line[i] != '0'; i++)
				printf("%c", save_line[i]);
		num_chars = getline(&save_line, &tm_line, stdin);
		}
		free(save_line);
}

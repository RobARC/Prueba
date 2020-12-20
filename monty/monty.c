#include "monty.h"
/*
 *
 *
 *
 */
int main(int argc, char *argv[])
{
	
FILE *OPFile;
ssize_t read = 0;
size_t len = 0;
char *line = NULL;
char *token = NULL;
char d[] = " \n";



if (argc != 2)
{	
	printf("USAGE: monty file\n");
	exit(EXIT_FAILURE);
}
OPFile = fopen(argv[1], "r");

if (OPFile == NULL)
{
printf("USAGE: monty file\n");
exit(EXIT_FAILURE);
}
else
puts("Abrio archivo");

while ((read = getline(&line, &len, OPFile)) != -1)
{
	token = strtok(line, d);
	while (token != NULL)
	{
		printf("%s ", token);
		token = strtok(NULL, d);
	}
	printf(" \n");
}

return 0;


}

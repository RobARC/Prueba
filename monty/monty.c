#include "monty.h"
/*
 *
 *
 *
 */
int main(int argc, char *argv[])
{
	
FILE *OPFile;


if (argc != 2)
{	
	printf("Error: Can't open file");
	exit(0);
}
OPFile = fopen(argv[1], "r");

if (OPFile == NULL)
{
puts("Error al abrir el archivo.");
exit(1);
}
else
puts("Abrio archivo");

return 0;


}

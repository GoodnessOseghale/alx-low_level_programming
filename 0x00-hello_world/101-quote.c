#include<stdio.h>
#include<unistd.h>
/**
* main -  This function is the entry point.
*
* Return: This should always be 0 (successs).
*
* Description: Hello c for printing.
*/
int main(void)
{
	FILE *fp;
	char str[] = "and that piece of art is useful - Dora Korpar, 2015-10-19";

	fp = fopen("file.text", "w");
	fwrite(str, 1, sizeof(str), fp);

	fclose(fp);

	return (1);
}

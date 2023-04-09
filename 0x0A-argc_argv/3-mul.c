#include <stdio.h>
#include <stdlib.h>
/**
 * main - Prints the multiplication of two numbers.
 * @argc: The number of arguments supplied to the program.
 * @argv: An array of pointers to the arguments.
 *
 * Return: Returns  1 else 0.
 */
int main(int argc, char *argv[])
{
int a, b;
if (argc <= 2 && argc != 0)
{
printf("Error\n");
return (1);
}
else
{
b = 1;
for (a = 1; a < 3; a++)
{
b *= atoi(argv[a]);
printf("%d\n",  b);
}
}
return (0);
}

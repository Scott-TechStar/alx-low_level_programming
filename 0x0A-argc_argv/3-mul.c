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
int a, b, mul;
if (argc <= 2 && argc != 0)
{
printf("Error\n");
return (1);
}
else
{
a = atoi(argv[1]);
b = atoi(argv[2]);
mul = a * b;
printf("%d\n", mul);
}
return (0);
}

#include <stdio.h>
#include <stdlib.h>
/**
 * main - Prints the multiplication of two numbers.
 * @argc: The number of arguments supplied to the program.
 * @argv: An array of pointers to the arguments.
 *
 * Return: If the program receives two arguments - 0.
 *         If the program does not receive two arguments - 1.
 */
int main(int argc, char *argv[])
{
int a, b, mul;
if (argc <= 2)
{
printf("Error\n");
return (1);
}
//convert string to int
a = atoi(argv[1]);
b = atoi(argv[2]);
mul = a * b;
printf("%d\n", mul);
return (0);
}

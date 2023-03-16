#include<stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
char sizechar;
int sizeint;
long sizelong;
long long sizelonglong;
float sizefloat;

printf("Size of a char: %lu byte(s)\n", sizeof(sizechar));
printf("Size of an int: %lu byte(s)\n", sizeof(sizeint));
printf("Size of a long int: %lu byte(s)\n", sizeof(sizelong));
printf("Size of a long long int: %lu byte(s)\n", sizeof(sizelonglong));
printf("Size of a float: %lu byte(s)\n", sizeof(sizefloat));

return (0);
}


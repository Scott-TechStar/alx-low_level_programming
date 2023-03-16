#include<stdio.h>
int main(void)
{
char sizechar;
int sizeint;
long sizelong;
long long sizelonglong;
float sizefloat;

printf("Size of char: %lu byte(s)\n", sizeof(sizechar));
printf("Size of int: %lu byte(s)\n", sizeof(sizeint));
printf("Size of long int: %lu byte(s)\n", sizeof(sizelong));
printf("Size of long long int: %lu byte(s)\n", sizeof(sizelonglong));
printf("Size of float: %lu byte(s)\n", sizeof(sizefloat));

return (0);
}


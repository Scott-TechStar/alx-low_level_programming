#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Generates random valid password.
 *
 * Return: Always 0.
 */
int main(void)
{
char pwd[84];
int i = 0, val = 0, diff1, diff2;
srand(time(0));
while (val < 2772)
{
pwd[i] = 33 + rand() % 94;
val += pwd[i++];
}
pwd[i] = '\0';
if (val != 2772)
{
diff1 = (val - 2772) / 2;
diff2 = (val - 2772) / 2;
if ((val - 2772) % 2 != 0)
diff1++;
for (i = 0; pwd[i]; i++)
{
if (pwd[i] >= (33 + diff1))
{
pwd[i] -= diff1;
break;
}
}
for (i = 0; pwd[i]; i++)
{
if (pwd[i] >= (33 + diff2))
{
pwd[i] -= diff2;
break;
}
}
}
printf("%s", pwd);
return (0);
}

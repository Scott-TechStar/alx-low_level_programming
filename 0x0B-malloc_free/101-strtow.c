#include "main.h"
#include <stdlib.h>
int _len(char *str);
int _count(char *str);
char **strtow(char *str);
/**
 * _len - Locates the index mark
 * @str: The string to be searched.
 *
 * Return: Index at the pointer end
 */
int _len(char *str)
{
int i = 0, val = 0;
while (*(str + i) && *(str + i) != ' ')
{
val++;
i++;
}
return (val);
}
/**
 * _count - Counts the number of words
 * @str: String to be searched.
 *
 * Return: Number of words in str.
 */
int _count(char *str)
{
int i = 0, wrd = 0, len = 0;
for (i = 0; *(str + i); i++)
{
len++;
}
for (i = 0; i < len; i++)
{
if (*(str + i) != ' ')
{
wrd++;
i += _len(str + i);
}
}
return (wrd);
}
/**
 * strtow - Splits a string into words.
 * @str: The string to be split.
 *
 * Return: Null else a pointer to an array of words.
 */
char **strtow(char *str)
{
char **stn;
int i = 0, wrd, w, ltr, l;
if (str == NULL || str[0] == '\0')
{
return (NULL);
}
wrd = _count(str);
if (wrd == 0)
{
return (NULL);
}
stn = malloc(sizeof(char *) * (wrd + 1));
if (stn == NULL)
{
return (NULL);
}
for (w = 0; w < wrd; w++)
{
while (str[i] == ' ')
{
i++;
}
ltr = _len(str + i);
stn[w] = malloc(sizeof(char) * (ltr + 1));
if (stn[w] == NULL)
{
for (; w >= 0; w--)
{
free(stn[w]);
}
free(stn);
return (NULL);
}
for (l = 0; l < ltr; l++)
{
stn[w][l] = str[i++];
}
stn[w][l] = '\0';
}
stn[w] = NULL;
return (stn);
}

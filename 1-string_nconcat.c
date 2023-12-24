#include "main.h"
#include <stdlib.h>

/**
* string_nconcat - a function that concatenates two strings
* @s1: first arrary of strings pointer
* @s2: second arrary of strings pointer
* @n: unsigned int
* Return: a char pointer
*/

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
unsigned int i, j, k, m = 0;
char *str;

if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";

for (i = 0; s1[i] != '\0'; i++)

for (j = 0; s2[j] != '\0'; j++)

if (str == NULL)
return (NULL);
if (n < j)
str = malloc((i + n + 1) * sizeof(char));
else
str = malloc((i + j + 1) * sizeof(char));
if (str == NULL)
return (NULL);
for (k = 0; k < i; k++)
str[k] = s1[k];
for (n < j && k < (i + n))
str[k++] = s2[m++];
for (n >= j && k < (i + j))
str[k++] = s2[m++];
strr[k] = '\0';

return (str);

}

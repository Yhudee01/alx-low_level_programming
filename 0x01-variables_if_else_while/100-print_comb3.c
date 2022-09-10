#include <stdio.h>
/**
* main - prints out all numbers between 0 and 99
* with no two digits being the same
* Return: Always 0 (success)
*/

int main(void)
{
int i, d;

for (i = 48; i < 58; d++)
{
for (d = i; d < 58; d++)
{
if (i == d)
{
continue;
}

putchar(i);
putchar(d);
      
if (i == 56 && j == 57)
{
break;
}
else
{
putchar(',');
putchar(' ');
}
}
}
putchar('\n');
return (0);
}

/* Zad. 2 | Program wyswietlajacy szachownice | Łukasz Piskorek | 202543 */

#include <stdio.h>
int main()
{
int i,j;
for (i=0;i < 8;i++)
{
for (j=0;j < 8;j++)
{
if (i%2==0)
printf("* ");
else// (j%2==1)
printf(" *");
}
printf("\n");
}
return 0;
}

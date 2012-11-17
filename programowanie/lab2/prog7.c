/* zad 6 petle */

#include <stdio.h>

int main()
{
int i,licznik=0;

double tab[6];
for (i=0;i<6;i++)
{
scanf("%lf", &tab[i]);
if (tab[i]>0)
licznik++;
}
printf("%d\n", licznik);
return 0;
}

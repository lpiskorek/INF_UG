/* zad.5 petle */

#include <stdio.h>

int main()
{
int tab[6];
int i;
for (i=0;i<6;i++)
{
scanf ("%d", &tab[i]);
}
for (i=0;i<6;i++)
{
printf ("%d ", tab[i]);
}
printf ("\n");

for (i=5;i>=0;i--)
{
printf ("%d ", tab[i]);
}
return 0;

}

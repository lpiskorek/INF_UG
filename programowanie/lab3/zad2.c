/* Łukasz Piskorek 202543
Elementarz 3 | Zadanie 2
*/

#include <stdio.h>
#include <math.h>

int main()
{
int a;
int i;
float pierw;
a=1;
i=1;
for(i=1;i<21;i=21)
{
for(a=1;a<21;a++)
{
pierw=sqrt(a);
printf("Liczba = '%2d' Pierwiastek = '%2f'\n",a ,pierw );
}
}
}

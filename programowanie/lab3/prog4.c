/* Łukasz Piskorek 202543
Elementarz 3 | Zadanie 3
*/

#include <stdio.h>
#include <math.h>

int main()
{
int a,b,obw;
float pp;
for(a=1;a<1000;a++)
{
for(b=a;b<1000;b++)
{
pp=sqrt(a*a+b*b);

if((float)(int)pp==pp && a+b+pp<=1000)
{
obw=a+b+pp;
printf("a='%d', b='%d', c='%d'\n",a ,b ,(int)pp);
printf("Obw. wyn. ='%d'\n", obw);
}
}
}
}

/* Program który wczytuje liczby a i b ,nastepnie wypisze liczby pomiedzy nimi */

#include <stdio.h>

int main()
{
int a,b,i;
a=b=0;
do {
scanf("%d", &a);
scanf("%d", &b);
} while (a>=b);
for (i=a;i<b;i++)
{
printf("%d\n", i);
}


return 0;
}

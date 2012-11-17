/* Łukasz Piskorek 202543
04.11.2012
Elementarz 2 | Zadanie 3
*/

#include <stdio.h>
void funkcjapi(int q)
{
int i;
float m, pi;
m=0.0;
pi=0.0;

for (i=0;i<q;i++)
{
if (i%2==1)
{
m=(2*i)+1;
pi=pi-(4/m);
}
else
{
m=(2*i)+1;
pi=pi+(4/m);
}
}
printf("Pi dla n = '%10d' WYNOSI '%10lf'\n", q, pi);
}

int main()
{
funkcjapi(10);
funkcjapi(100);
funkcjapi(1000);
funkcjapi(10000);
funkcjapi(100000);
funkcjapi(1000000);

return 0;
}

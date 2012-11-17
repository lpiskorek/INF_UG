/* Zad. 4 petle
*/

#include <stdio.h>

int main()
{
int n,i,sum;
sum=0;
scanf("%d", &n);
if (n<1)
{
printf("Wpisana liczba jest mniejsza od 1");
return 0;
}

for (i=1;i<n;i++)
{
sum=sum+i;
}
printf("%d\n", sum);
return 0;
}

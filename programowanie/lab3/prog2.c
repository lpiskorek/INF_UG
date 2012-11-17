/* Łukasz Piskorek 202543
program, który sprawdza czy podana liczba całkowita jest pierwsza.
Elementarz 2 | Zadanie 2
*/

#include <stdio.h>
int main()
{
  int n, i, jest_pierwsza;
jest_pierwsza = 1;

  printf("Podaj liczbe calkowita: ");
  scanf ("%d", &n);
for (i=2;i<n;i++)
{
if (n%i==0)
{
jest_pierwsza=0;
break;
}
}

  printf("Podana liczba '%d' jest %s\n",n, jest_pierwsza ? "pierwsza" : "złożona");
  return 0;
}

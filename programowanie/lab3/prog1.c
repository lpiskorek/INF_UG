/* Łukasz Piskorek 202543
program dla podanej z klawiatury liczby M ma obliczyć najmniejszą liczbę n
Elementarz 2 | Zadanie 1
*/

#include <stdio.h>
int main() {
  int M,n;
  int suma;
  suma = 0;
  int i;
  i = 1;

  printf ("Podaj liczbe M: ");
  scanf("%d", &M);
  while ( suma <= M)
{
     suma=suma+i;
     i=i+1;
}
  n=i-1;
  printf("Szukane n to: %d\n", n);
  return 0;
}

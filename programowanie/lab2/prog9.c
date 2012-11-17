
/* Program sortujacy babelkowo
*/
#include <stdio.h>
int main()
{
  int tablica[1000];
  int i, j, x, tmp;

  printf ("Podaj liczby (podanie ujemnej liczby kończy wprowadzanie danych):");
  scanf("%d", &tablica[0]);

  x=0;
  while ((i<x) && tablica[x++]>0) scanf("%d", &tablica[x]);
  x--;

  for (i=0;i<x-1; i++)
  for (j=0;j<x-1; j++)
  if (tablica[j]>tablica[j+1])
  {
    tmp = tablica[j];
    tablica[j] = tablica[j+1];
    tablica[j+1] = tmp;
  }

  printf("\nPosortowane elementy w podanej tablicy: ");
  for (i=0; i<x; i++)
  printf("%d ", tablica[i]);
  printf("\n\n");

return 0;

}

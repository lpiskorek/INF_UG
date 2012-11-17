/* Program ten dla dwóch liczb wczytanych z klawiatury
wypisuje, która z nich jest większa. */
#include <stdio.h>
int main()
{
   int licz1,licz2 ;

   printf("Podaj pierwsza liczbe: ");
   scanf("%d", &licz1);
   printf("i jeszcze jedna");
   scanf("%d", &licz2);
   if (licz1<licz2)
     printf("Wieksza jest %d",licz2);
   else if (licz1>licz2)
     printf("wieksza jest %d",licz1);
   else
     printf("obie liczby są rowne");
   printf("\n\n");

   return 0;
}

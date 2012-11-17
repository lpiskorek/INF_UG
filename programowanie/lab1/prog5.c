/* Łukasz Piskorek | 202543. Program 1-8.
*/

#include <stdio.h>

int main()

{

int a;
int b;
int c;
printf("Wprowadź trzy liczby całkowite : ");
scanf("%d" , &a);
scanf("%d" , &b);
scanf("%d" , &c);

int Suma = a + b + c;
printf("Suma wynosi: %d \n ",Suma);

int Iloczyn = a * b * c;
printf("Iloczyn wynosi : %d \n",Iloczyn);

if(a<=b && a<=c)
printf("Najmniejsza liczba to : %d \n ",a);
else if(b<=a && b<=c)
printf("Najmniejsza liczba to : %d \n ",b);
else
printf("Najmniejsza liczba to: %d \n ",c);

if(a>=b && a>=c)
printf("Najwieksza liczba to : %d \n",a);
else if(b>=a && b>=c)
printf("Najwieksza liczba to : %d \n",b);
else
printf("Najwieksza liczba to : %d \n",c);

return 0;
} 

/* Zad. 1 | Program wypisuje kolejne potęgi 2 nie przekraczające 2010 | Łukasz Piskorek | 202543  */

#include <stdio.h>

main()

{
  int x=2;

  while (x < 2010){
    printf("%d\n", x);
    x*=2;

}
}

  /*
ALTERNATYWNE ROZWIAZANIE!!

for (x=2;x < 2010; x*=2){
printf("%d\n", x);
*/

/*
Program rysujacy trojkaty
*/

#include <stdio.h>
int main () {

  int i, j, wielkosc;

  wielkosc = 4;

  j=0;

  for (i=0; i<wielkosc; i++) {
    for (j=0; j<=i; j++) printf("*");
    printf("\n");
  }

  printf("\n");

  for (i=0; i<wielkosc; i++) {
    for (j=i; j<wielkosc; j++) printf("*");
    printf("\n");
  }

  printf("\n");

  for (i=0; i<wielkosc; i++) {
    for (j=0; j<i; j++) printf(" ");
    for (j=i; j<wielkosc; j++) printf("*");
    printf("\n");
  }

  printf("\n");

  for (i=0; i<wielkosc; i++) {
    for (j=i; j<wielkosc-1; j++) printf(" ");
    for (j=0; j<=i; j++) printf("*");
    printf("\n");
  }

  return 0;

}

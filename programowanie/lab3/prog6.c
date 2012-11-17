#include<stdio.h>
#include<math.h>
main () {
  int a,b,obwod;
  float c;

    for (a=1; a<=500; a++) { // to do: zrobic aby nie bylo gornej granicy
      for (b=a; b<=500; b++) {	// to do: zrobic aby nie bylo gornej granicy

        c=sqrt(a*a+b*b);

          if((float)(int)c==c && a+b+c<1000) {

             obwod=a+b+c;

             printf("a=%d, b=%d, c=%d\n",a ,b ,(int)c);
             printf("Obwód: %d\n\n", obwod);
          }
       }
    }
}

<<<<<<< HEAD
/* Program rysujacy trojkaty 2

*/
=======
/* Program rysujacy trojkaty 2 */
>>>>>>> 8f3cf2138fa0ca450070196e1d6fc7a268b3847a



#include <stdio.h>

int main()
{
int i,j;
for (i=1;i<5;i++)
{
for (j=0;j<i;j++)
printf ("*");
printf ("\n");
}
printf ("\n");
for (i=4;i>0;i--)
{
for (j=0;j<i;j++)
printf ("*");
printf ("\n");
}
printf ("\n");
for (i=4;i>0;i--)
{
for (j=4;j>i;j--)
putchar(' ');
for (j=0;j<i;j++)
putchar('*');
printf ("\n");
}
printf ("\n");
for (i=4;i>0;i--)
{
for (j=1;j<i;j++)
putchar(' ');
for (j=4;j>=i;j--)
printf ("*");
printf ("\n");
}
return 0;
}

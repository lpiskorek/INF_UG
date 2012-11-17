/* Łukasz Piskorek 202543
04.11.12
Elementarz 3 | Zad.1
*/

#include <stdio.h>
int main()
{
    int c;
    while ((c=getchar())!=EOF)
    if (c=='\t')
    printf("\\t");
    else if (c=='\\')
    printf("\\\\");
    else
    putchar(c);
    return 0;
}

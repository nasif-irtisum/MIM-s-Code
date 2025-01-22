#include <stdio.h>
int number;
int main ()
{
    scanf ("%d", &number);
    if (!(number & number -1)) printf ("Power of 2");
    else printf ("Not power of 2");
    return 0;
}

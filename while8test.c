#include <stdio.h>

int main()
{
 int    nb;

 nb = 0;

 while (nb < 6666)
 {
        nb++;
        if (nb == 666)
                nb = 0;

        if ((nb % 2) == 0)
                printf(" ");
        if ((nb % 2) == 1)
                printf(" ");
 }

}

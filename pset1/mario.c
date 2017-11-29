#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int h;
    do
    {
        printf("Height:") ;
        h = GetInt() ;
    }
    while (h < 0 || h > 23) ;
    for (int r = 0; r < h; r++)
    {
    int s;
    s = h - 1 - r ;
    int p;
    p = h + 1 - s ;
        int i = 0 ;
        while (i++ < s)
        {
            printf (" ") ;
        }
        int y = 0 ;
        while (y++ < p)
        {
            printf ("#") ;
        }
    printf("\n") ;  
    }
}
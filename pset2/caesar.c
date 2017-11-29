#include <cs50.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main (int argc, string argv[])
{
    if (argc != 2)
    {
        printf("Try again!\n") ;
        return 1 ;
    }
    else
    {
        int key = atoi (argv[1]) ;
        string s = GetString() ;
        for (int i = 0, n = strlen(s); i < n; i++)
        {
            if (isblank (s[i]))
            {
                printf(" ") ;
            }
            else if (isupper (s[i]))
            {
                printf("%c", ((((s[i] - 65) + key) %26) + 65)) ;
            }
            else if (islower (s[i]))
            {
                printf("%c", ((((s[i] - 97) + key) %26) + 97)) ;
            }
            else
                printf("%c", s[i]) ;
        }
    }
    printf ("\n") ;
    return 0 ;
}
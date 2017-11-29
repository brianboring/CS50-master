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
        string key = argv[1] ;
        int keylen = strlen(argv[1]) ;
        
        for (int a = 0; a < keylen; a++)
        {
            if (isdigit (key[a]))
            {
                printf("Command must be alpha!\n") ;
                return 1 ;
            }
        }
    for (int j = 0; j < keylen; j++)
        {
            if (isupper (key[j]))
            {
                key[j] = key[j] - 65 ;
            }
            else if (islower (key[j]))
            {
                key[j] = key[j] - 97 ;
            }
        }
        string s = GetString() ;
            int j = 0 ;
            for (int i = 0, n = strlen(s); i < n; i++)
            {
                if (isblank (s[i]))
                {
                    printf(" ") ;
                }
                else if (isupper (s[i]))
                {
                    printf("%c", ((((s[i] - 65) + key[j % keylen]) %26) + 65)) ;
                    j++ ;
                }
                else if (islower (s[i]))
                {
                    printf("%c", ((((s[i] - 97) + key[j % keylen]) %26) + 97)) ;
                    j++ ;
                }
                else
                {
                    printf("%c", s[i]) ;
                }
            }
        }
    {
        printf("\n") ;
        return 0 ;
    }
}
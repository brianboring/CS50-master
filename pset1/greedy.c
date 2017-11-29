#include <cs50.h>
#include <stdio.h>
#include <math.h>

int main(void) 
{
    //c = change in cents
    //q = quarters
    //d = dimes
    //n = nickels
    //p = pennies
    //j = remainder after quarters
    //k = remainder after dimes
    //t = total coins
    
    float change;
    do
    {
        printf("O hai! How much change is owed?\n") ;
        change = GetFloat()*100 ;
    }
    while (change<0) ;
    //    printf("%.0f is owed.\n", change) ;
        int c = round(change) ;
    //    printf("As an integer, it is %i.\n", c) ;
        int q = c / 25 ;
        int j = c % 25 ;
    //    printf("%i quarters and %i remaining.\n", q, j) ;
        int d = j / 10 ;
        int k = j % 10 ;
    //   printf("Then you get %i dimes and %i remaining.\n", d, k) ;
        int n = k / 5 ;
        int p = k % 5 ;
    //   printf("Then you get %i nickels and %i pennies.\n", n, p) ;
        int t = q + n + d + p ;
        printf("%i\n", t) ;
}
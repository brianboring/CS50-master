/**
 * helpers.c
 *
 * Computer Science 50
 * Problem Set 3
 *
 * Helper functions for Problem Set 3.
 */
       
#include <cs50.h>

#include "helpers.h"

/**
 * Returns true if value is in array of n values, else false.
 */
bool search(int value, int values[], int n)
    {
    // TODO: implement a searching algorithm
    int low = 0, high = n-1, mid;
    
    while (low <= high)
        {
            mid = (low+high)/2 ;
            
            if (values[mid] < value)
                {
                    low = mid + 1 ;
                }
            else if (values[mid] == value)
                {
                    return true;
                }
            else if (values[mid] > value)
                {
                    high = mid - 1 ;
                }
        }
    return false;
}    

/**
 * Sorts array of n values.
 */
void sort(int values[], int n)
{
    // TODO: implement an O(n^2) sorting algorithm
    int c, d, position, swap ;
    
    for (c = 0; c < (n-1); c++)
        {
            position = c ;
            
            for (d = c + 1; d < n; d++)
                {
                    if ( values[position] > values[d])
                        position = d ;
                }
                if (position != c)
                    {
                        swap = values[c] ;
                        values [c] = values[position] ;
                        values [position] = swap ;
                    }
        }
    
    return;
}
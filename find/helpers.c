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
/* bool search(int value, int values[], int n)
{
    if (value < 0)
        return false;
    else
        return binarySearch(value, values, n);
}*/


/**
 * Sorts array of n values.
 */
void sort(int values[], int n)
{
    // TODO: implement an O(n^2) sorting algorithm
    int temp;
    for (int i = 0; i < n; i++) {
        int smallestI = i;
        for (int j = i + 1; j < n; j++)
        {
            if (values[smallestI] > values[j])
                smallestI = j;
        }
        // Swapping of values;
        temp = values[smallestI];
        values[smallestI] = values[i];
        values[i] = temp;
    }

}

bool search(int value, int values[], int n)
{
    int end = n - 1;
    int beginning = 0;

    while (end >= beginning) {
        int mid = (beginning + end) / 2;
        if (values[mid] == value) 
            return true;
        else if (values[mid] > value) 
            end = mid - 1;
        else
            beginning = mid + 1;
    }

    return false;
}
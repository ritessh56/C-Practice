// Check whether a number is even or odd.
#include <stdio.h>
int main()
{
    // this code is also work for negative number
   int A ;

    printf("Enter number : ");
    scanf("%d", &A);

    if(A % 2 )
    {
        printf("A is an odd number");
    }
    else
    {
        printf("A is an even number");
    }
    return 0;
}
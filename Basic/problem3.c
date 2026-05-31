// Find the largest of three numbers.
#include <stdio.h>
int main()
{
    // int a, b, c;
    // a = 3;
    // b = 4;
    // c = 5;
    // if (a > b > c)
    // {
    //     printf("A is largest number");
    // }
    // else if (b > a > c)
    // {
    //     printf("B is  greater no");
    // }
    // else
    // {
    //     printf("C is greater");
    // } 

    int a, b, c;

    printf("Enter number A :\n");
    scanf("%d", &a);

    printf("Enter number B :\n");
    scanf("%d", &b);

    printf("Enter number C :\n");
    scanf("%d", &c);

    if (a > b > c)
    {
        printf("A is largest number");
    }
    else if (b > a > c)
    {
        printf("B is  largest no");
    }
    else
    {
        printf("C is largest");
    }
    return 0;
}
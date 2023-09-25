#include<stdio.h>
#include<conio.h>
void main()
{
    int n;

    printf("enter the value of n :");

    scanf("%d",&n);

    if(n%2==0)
    {
        printf("Given no. is even");
    }

    else
    {
        printf("Given no. is odd");
    }

    getch();
}
#include<stdio.h>
#include<conio.h>
void main()
{
    int n;

    printf("enter the value of n:");

    scanf("%d",&n);

    if(n>0)
    {
        printf("the value is positive");
    }
    else
    if(n<0)
    {
        printf("the value is negative");
    }
    else
    {
        printf("the no. is zero");
    }
    getch();
}
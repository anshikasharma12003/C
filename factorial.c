#include<stdio.h>
#include<conio.h>
void main()
{
    int fact =1,n;

    printf("enter the value of n:");
    scanf("%d",&n);

    int i=1;

    while(i<=n)
    {
        fact = fact*i;
        i++;
    }
    printf("the factorial of %d = %d",n,fact);
    

    getch();
}
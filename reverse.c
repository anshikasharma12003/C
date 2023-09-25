#include<stdio.h>
#include<conio.h>
void main()
{
    int i,n,rem,rev;

    printf("enter the number");
    scanf("%d",&n);
    while(n>0)
    {
        rem = n%10;
        rev = rem;
        n = n/10;

        printf("%d",rev);
    }
    getch();
}
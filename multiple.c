#include<stdio.h>
#include<conio.h>
void main()
{
    int n,i,size;

    printf("enter the number:");
    scanf("%d",&n);

    printf("enter your table size 1 to size");
    scanf("%d",&size);

    printf("the multiplication table of %d from 1 to %d:",n,size);
    printf("\n");

    for(i=1;i<=10;i++)
    {

        printf("%d*%d=%d",n,i,n*i);
        printf("\n");
    }

    

    getch();

}
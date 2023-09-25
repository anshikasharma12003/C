#include<stdio.h>
#include<conio.h>
#include<stdbool.h>

int main()

{
    int i,n;

    bool flag = 0;

    printf("enter the value of n");

    scanf("%d",&n);

    if(n==1 || n==0)
    {
        flag=1;
    }

    for(i=2;i<n;i++)
    {
        if(n%i==0)
        {
            flag = 1;
        }
        
    }

    if(flag==0)
    {
        printf("prime");
    }
    else
    {
        printf("non-prime");
    }

    return 0;

}
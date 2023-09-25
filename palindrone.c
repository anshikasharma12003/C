#include<stdio.h>
#include<conio.h>
int main()
{
    int i,n,temp,rem,value=0;

    printf("enter the number:");
    scanf("%d",&n);
    temp = n;
    

    while(n>0)
    {
        rem = n%10;
        value = (value*10)+ rem;
        n = n/10;
        
    }

    if(temp==value)
    
        printf("no.is palindrone");
    
    else
        printf("no. is not palindrone");
    

    getch();
}
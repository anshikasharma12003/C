#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
    int n,sum=0,rem,temp;

    printf("enter the number");

    scanf("%d",&n);

    temp = n;

while(n>0)
{
        rem = n%10;
        sum+=pow(rem,3);
         n =n/10;
}

        if(temp==sum)
    
    printf("the no. is armastrong");
    

    else
        printf("the no. is not armstrong");

    

    getch();

}
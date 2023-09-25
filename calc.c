#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
    int a,b;
    char ch;
    
    printf("enter your choice");
    scanf("%c",&ch);


    printf("enter the integer value of a and b");
    scanf("%d%d",&a,&b);

    
    
   switch(ch)
   {
    case'+':
    printf("the sum of two number is :%d+%d=%d",a,b, a+b);
    break;

    case'-':
    printf("the subtraction of two number is:%d-%d=%d",a,b,a-b);
    break;

    case'*':
    printf("the product of two number is:%d*%d=%d",a,b,a*b);
    break;

    case'/':
    printf("the division of two number is:%d/%d=%d",a,b,a/b);
    break;

    default:
    printf("invalid choice");
   }
getch();
}
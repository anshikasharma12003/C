#include<stdio.h>
#include<conio.h>
void main()
{
    int year;

    printf("enter the year");
    scanf("%d",&year);

    if(year%400==0 || year%100==0 || year%4==0)
        
        {
            printf("the year is a leap year");
        }

        else
        {
            printf("the year is not a leap year");
        }

    getch();
}
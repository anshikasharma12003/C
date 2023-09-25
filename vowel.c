#include<stdio.h>
#include<conio.h>
void main()
{
    char ch;

    printf("enter your character");

    scanf("%c",&ch);

    if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u')
    {
         printf("the given character is vowel");
    }

    else{
        printf("the given character is consonant");
    }
   
    getch();

}
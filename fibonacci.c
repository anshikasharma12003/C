#include<stdio.h>
#include<conio.h>
void main()
{
    int i,n1=0,n2=1,size,n;

    printf("enter your series size:");
    scanf("%d",&size);
    printf("%d\t%d \t",n1,n2);
    for(i=2;i<=size;++i)
    {
        n = n1+ n2;
        printf("%d",n);
        printf("\t");
        n1 = n2;
        n2 = n;
    }
    getch();
}
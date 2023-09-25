#include<stdio.h>
#include<conio.h>
void main()
{
    int i;
    float f;
    double d;
    char c;
     
     /*we can use %lu also in the place of %zu for describe the size of the datatype*/

     printf("the integer size in bytes : %zu \n",sizeof(i));
     printf("the float size in bytes : %zu \n",sizeof(f));
     printf("the double size in bytes : %zu \n",sizeof(d));
     printf("the character size in bytes : %zu",sizeof(c));

     getch();
}
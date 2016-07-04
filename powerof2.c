#include<stdio.h>
#include<conio.h>
void main()
{
int a,b;
clrscr();
scanf("%d",&a);

if(a%2==0)
{
b=a/2;
if(b%2==0)
{
printf("%d is the power of 2",a);
}
}
getch();
}

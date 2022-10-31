#include<stdio.h>
#include<conio.h>
void main()
{
int c,d,temp;
clrscr();
printf("enter two numbers");
scanf("%d%d",&c,&d);
printf("before exchanging valuse c=%d and d=%d",c,d);
temp=c;
c=d;
d=temp;
printf("\nafter exchanging values c=%d and d=%d",c,d);
//printf("c=%d",c);
//printf("d=%d",d);
getch();
}

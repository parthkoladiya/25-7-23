#include<stdio.h>
#include<conio.h>
int main()
{
int i,n;
clrscr();
printf("ENTER YOUR NUMBER");
scanf("%d",&n);
i=0;
do
{
printf("%d",i);
i++;
}while (i<=n);
getch();
}
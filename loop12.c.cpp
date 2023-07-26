#include<stdio.h>
#include<conio.h>
int main()
{
int i;
clrscr();
for (i=1;i<=10;i++)
{
printf("%d",i);
}
if(i%2==0)
{
printf("even");
}
getch();
}
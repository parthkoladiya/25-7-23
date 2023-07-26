#include<stdio.h>
#include<conio.h>
int main()
{
 int n1=0,n2=1,n3,count,num;
 clrscr();
 printf("ENTER YOUR COUNT NUMBER=>");
 scanf("%d",&num);
 printf("\n%d\n%d",n1,n2);
 for(count=3;count<=num;count++)
  {
  n3=n1+n2;
  printf("\n%d",n3);
  n1=n2;
  n2=n3;
  }
 getch(); 
}
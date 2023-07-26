#include<stdio.h>
#include<conio.h>
int main()
{
int i,sum=0,n;
clrscr();
printf("ENTER YOUR NUMBER==>");
scanf("%d",&n);
i=1;
while(i<=n)
{
printf("%d",i);
i++;
  if(i%2==0)
  {
  printf("%d\n",i);
  }
  sum=sum+i;
  printf("\n%d",sum);
}
getch();
}
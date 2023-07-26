#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,rem,o,result=0;
    printf("ENTER TOYR 3 NUMBER==>");
    scanf("%d",&n);
    o=n;
    while(o!=0)
    {
    rem=o%10;
    result+=rem*rem*rem;
    o/=10;
    }
    if(result==n)
    {
    printf("%d  Is an Armstrong NUMBER.",n);
    }
    else
    {
    printf("%d Is not an Arnstrong NUMBER.",n);
    }
   
    return 0;
}
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,rem,reverse=0;
    printf("ENTER TOYR NUMBER==>");
    scanf("%d",&n);
    printf("%d",n);
    while(n!=0)
    {
    rem=n%10;
    reverse=reverse*10+rem;
    n/=10;
    }
    printf("reverse number %d",reverse);
   
    return 0;
}
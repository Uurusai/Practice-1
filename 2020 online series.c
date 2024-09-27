#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{
    int n, a ,b ;
    scanf("%d", &n);
    a = (int)pow(3,n-1);
    if ((n%3) == 1 )
    {
        b = 1 ;
        printf("%d\n", a);
    }
    else if((n%3) == 2)
    {
        b = 2 ;
        printf("%d/%d",a,b);
    }
    else if(n%3 == 0)
    {
        b = 3 ;
        printf("%d / %d",a,b );
    }
}

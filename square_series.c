#include<stdio.h>
#include<math.h>
int main()
{
    int n, sum = 0 ;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    for(int i=1 ; i<=n ; i++)
    {
        sum = sum + pow(-1,i+1)*pow(i,2) ;
    }
    printf("sum = %d",sum);
}
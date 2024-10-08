#include<stdio.h>
int main()
{
    int k = 7*9 , i = 1, sum = 0 ;
    while(k<600)
    {
        sum += k ;
        i++ ;
        k = 7*9*i ;
    }
    printf("%d", sum);

}
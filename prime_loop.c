#include<stdio.h>
int main()
{   printf("I lub u\n");
    int s = 0, prime ;
    for(int i = 2 ; s <10 ; i++)
    {   
        int prime = 1 ;
        for(int j=2;j<=i;j++)
        {
            if(i%j == 0 && i!=j)
            {
                prime = 0 ;
            }
        }
        if (prime == 1)
        {
            s++ ;
             printf("%d\t", i);
        }
    }
   
}
#include<stdio.h>
#include<math.h>
#include<limits.h>

int digit(int d)
{   
    int digit = 0 ;
    while(d>0)
    {     d/=10 ;
        digit++; 
    }
    return digit ;
}

int check_arm(int n)
{   int r = n ;
    int dig = digit(n);
    int sum = 0 ;
    while(n!=0)
    {   int j = n%10 ;
        sum += pow(j,dig);
        n/=10 ;
    }
    return sum == r ;
}

int main()
{   
    int m,n, k=0;
    int min = INT_MAX ;
    int max = INT_MIN ; 

    printf("Enter range: ");
    scanf("%d%d", &m, &n);

    for(int i = m ; i<=n ; i++)

    { 
        if (check_arm(i))
        {   k++ ;
            if(i<min)
            {   
                min = i ;
            }
            if(i>max)
            {
                max = i ;
            }
        }
    }
    if(k == 0)
    {
        printf("There are no armstrong numbers");
    }
    else
    {  
        printf("Minimum armstrong number: %d \n",min);
        printf("Maximum armstrong number: %d",max);
    }  
}
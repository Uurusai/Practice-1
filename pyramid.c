#include<stdio.h>
int main()
{   
    int n;
    printf("Enter number of rows: ");
    scanf("%d",&n);
    //printinf a perfect pyramid
    for(int i=1;i<=n;i++)
    {   for(int k=1;k<=(n-i);k++)
        {
            printf(" ");
        }
        for(int j=1;j<=i;j++)
        {
            printf("* ");
        }
        printf("\n");
    }
    //add this if u want to print a diamond
    for(int i=n-1;i>0;i--)
    {   for(int k=1;k<=(n-i);k++)
        {
            printf(" ");
        }
        for(int j=1;j<=i;j++)
        {
            printf("* ");
        }
        printf("\n");
    }
    printf("\n");
    //printing a pyramid with odd numberes columns
     for(int i=1;i<=n;i++)
    {   for(int k=1;k<=2*(n-i);k++)
        {
            printf(" ");
        }
        for(int j=1;j<=(2*i - 1);j++)
        {
            printf("* ");
        }
        printf("\n");
    }
}
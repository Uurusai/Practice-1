#include<stdio.h>
int main()
{
    int n;
    printf("Enter number of rows: ");
    scanf("%d",&n);
    for(int i = 1; i<=n ; i++)
    {
        for(int k=1; k<=(n-i);k++)
        {
            printf(" ");
        }
        for(int j=1;j<=i;j++)
        {
            printf("%c", j+64);
        }
        printf("\n");
    }
}
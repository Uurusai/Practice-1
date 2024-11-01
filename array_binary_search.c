#include<stdio.h>
#include<limits.h>
int main()
{
    int n;
    printf("Enter array size: ");
    scanf("%d", &n);
    int arr[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d", &arr[i]);
    }
    
    for(int i=0; i<n ; i++)
    {
        int x ;
        scanf("%d", &x);
        int floor = INT_MIN , ceil = INT_MAX ;
        for(int j=0; j<n ;j++)
        {
            if (x == arr[j])
            {
                floor = x;
                ceil = x;
                break;
            }
            else if(arr[j]<x && arr[j]>floor)
            {
                floor = arr[j];
            }
            else if(arr[j]>x && (arr[j]<ceil)  )
            {
                ceil = arr[j];
            }
        
        }
        if (floor == INT_MIN) {
            printf("Floor of %d: None\n", x);
        } else {
            printf("Floor of %d: %d\n", x, floor);
        }

        if (ceil == INT_MAX) {
            printf("Ceil of %d: None\n", x);
        } else {
            printf("Ceil of %d: %d\n", x, ceil);
        }
    }

}
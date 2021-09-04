#include<stdio.h>

int main()
{
    int n;
    printf("enter a number");
    scanf("%d",&n);
    int a[n],i,sum =0;
    printf("enter the array elements");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("sum of the given array is:");
    for(i=0;i<n;i++)
    {
        sum=sum+a[i];
    }
    printf("%d",sum);

    return 0;
}

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout<<"enter a number";
    cin>>n;
    int a[n],i,sum =0;
    cout<<"enter the array elements";
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cout<<"sum of the given array is:";
    for(i=0;i<n;i++)
    {
        sum=sum+a[i];
    }
    cout<<sum;

    return 0;
}

#include<iostream>
using namespace std;
int helper(int ar[],int b, int &sum)
{
    if(b==-1)
    {
        return sum;
    }
    sum+=ar[b];
    return helper(ar,b-1,sum);
}
int duplicate_no(int arr[],int n)
{
    int expected_sum, actual_sum=0;
    expected_sum=(n*(n-1))/2;
    actual_sum=helper(arr,n-1,actual_sum);
    return actual_sum-expected_sum;
}
int main()
{
    int n,dupl;
    cout<<"Enter the number of elements in the array : ";
    cin>>n;
    int a[n];
    cout<<"Enter the number in the array :\n";
    for(int i=0;i<n;++i)
    {
        cin>>a[i];
    }
    dupl=duplicate_no(a,n);
    cout<<"Duplicate Number is : "<<dupl;
    return 0;
}

#include <iostream>
using namespace std;
    
int main()
{
    int arr[]={0,1,3};
    int sum = 0;
    int n = sizeof(arr)/sizeof(arr[0]);
    int actualsum = (n*(n+1))/2;

    for(int i =0; i<n;i++)
    {
       sum+=arr[i];
    }
    cout<< actualsum-sum;
    return 0;
}
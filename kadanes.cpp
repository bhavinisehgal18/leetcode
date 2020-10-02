#include <iostream>
#include <climits> 
using namespace std; 
  
int subarray(int a[], int n) 
{ 
    int max = INT_MIN,current = 0; 
    for (int i = 0; i < n; i++) 
    { 
        current = current + a[i]; 
        if (max < current)
        {
            max = current;
        }    
        if (current < 0) 
        {
            current = 0; 
        }    
    } 
    return max; 
} 

int main() 
{ 
    int t,n;
    cin>>t;
    for(int j=0; j<t;j++)
    {   
        cin>>n;
        int arr[n];
        for(int i=0; i<n; i++)
        {
           cin>>arr[i];
        }
       int sum = subarray(arr, n); 
       cout<<sum<<endl; 
    }
    return 0; 
}  
    
  
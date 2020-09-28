#include <iostream>
using namespace std;

void reversearray(int A[], int low, int high)
{
  for (int i=low, j= high; i<j; i++,j--)
  {
      int temp=A[i];
      A[i]=A[j];
      A[j]=temp;
  }
}  
void callarray(int A[], int k , int n)
{
    reversearray(A,0,n-k-1);
    reversearray(A,n-k,n-1);
    reversearray(A,0,n-1);   
}    
int main()
{   
    int A[]={1,2,3,4,5,6,7};
    int k = 3;
    int n = sizeof(A)/sizeof(A[0]);
    callarray(A,k,n);

    for(int i =0; i<n;i++)
      {
        cout<<A[i];
      }
    return 0;
}
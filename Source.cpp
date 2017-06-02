#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int Merge(int a,int n)
{
  int i = 0;
  int j = n-1;
  int result = 0;
  while(i<=j)
  {
          if(a[i]==a[n-1])
          {
            i++;
            j--;
          }

          else if(a[i] < a[j])
          {
            i++;
            a[i] = a[i] + a[i-1];
            result++;
          }

          else
          {
            j--;
            a[j] = a[j] + a[j+1];
            result++;
          }
    
  }    
}


int main()
{ 
    int arr[] = {1,4,5,9,1};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout << Merge(arr,n);
    return 0;
}


#include<bits/stdc++.h>
using namespace std;
int lowerbound(int arr[],int n,int x)
{
  int s=0;
  int e=n-1;
  int ans=n;
  while(s<=e)
  {
  int mid=(s+e)/2;
  if(arr[mid]>=x)
  {
    ans=mid;
    e=mid-1;
  }
  else
  {
    s=mid+1;
  }
  }
  return ans;
}
int main()
{
    int n=5;
    int x=9;
   int arr[5]={1,9,9,2,4};
   int l=lowerbound(arr,n,x);
    cout<<l<<endl;
    return 0;
}
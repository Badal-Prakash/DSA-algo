#include<bits/stdc++.h>
using namespace std;
void bubble_sort(int arr[],int n)
{
    for(int i=1;i<n;i++)
    {
        bool sorted=false;
        for(int j=0;j<n-i;j++)
        {
            if(arr[j]>arr[j+1])
            {
                swap(arr[j],arr[j+1]);
                sorted =true;
            }
        }
        if(sorted==false)
        {
            break;
        }
    }
}
int main()
{
     int n;
    cout<<"enter the size of array";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
      cin>>arr[i];
    }
    bubble_sort(arr,n);

    for(int i=0;i<n;i++)
    {
      cout<<arr[i]<<" ";
    }
    return 0;
}
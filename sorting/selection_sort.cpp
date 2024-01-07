// #include<bits/stdc++.h>
// using namespace std;
// void selection_sort(vector<int> &arr )
// {
//   int n=arr.size();
  
//   for(int i=0;i<n-1;i++)
//   {

//     int min=i;
//     for(int j=i+1;j<n;j++)
//     {
//         if(arr[j]<arr[min])
//         {
//           min=j;
//         }
//     }
//     swap(arr[min],arr[i]);
//   }
// }
// int main()
// {
//     int n;
//     cin>>n;
//     vector<int> arr;
//     for(int i=n;i>=0;i--)
//     {
//       arr.push_back(i);
//     }
//     selection_sort(arr);
//      for(int i=0;i<n;i++)
//     {
//       cout<<arr[i]<<endl;
//     }
//     return 0;
// }
#include<bits/stdc++.h>
using namespace std;
void selection_sort(int arr[],int n)
{
  for(int i=0;i<=n-2;i++)
  {
    int mini=i;
    for(int j=i;j<n-1;j++)
    {
      if(arr[j]<arr[mini])
      {
        mini=j;
      }
    }
    swap(arr[mini],arr[i]);
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
    selection_sort(arr,n);

    for(int i=0;i<n;i++)
    {
      cout<<arr[i]<<" ";
    }
    return 0;
}
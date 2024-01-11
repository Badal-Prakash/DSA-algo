#include<bits/stdc++.h>
using namespace std;
class Stack{
  public:
  int top;
  int* arr;
  int size;
  Stack(int size)
  {
    this->size=size;
    top=-1;
    arr=new int[size];
  }
  void push(int d)
  {
    if(size-top>1)
    {
      top++;
      arr[top]=d;
    }
    else{
      cout<<"stack overflow"<<endl;
    }
  }
  int peek()
  {
    if(top==-1)
    {

      cout<<"stack is empty";
      return 0;
    }
    else{
      int x=arr[top];
      return x;
    }
  }
  void pop()
  {
    if(top>=0)
    {
  top--;
    }
    else
    {
     
      
    }
  }

};
int main()
{
  Stack s(10);
  s.push(11);
  cout<<s.peek();
  s.pop();
    
    return 0;
}
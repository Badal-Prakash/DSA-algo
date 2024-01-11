#include<bits/stdc++.h>
using namespace std;
class node{
  public:
  int data;
  node* next;
  node(int d)
  {
    this->data=d;
    this->next=NULL;
  }
  ~node()
  {
    int val=this->data;
    if(this->next!=NULL)
    {
      delete next;
      next=NULL;
    }
  }
};
int main()
{
    
    
    return 0;
}
#include<bits/stdc++.h>
using namespace std;
class node{
  public:
  int data;
  node* next;
  node * prev;
  node(int d)
  {
    this->data=d;
    this->next=NULL;
    this->prev=NULL;

  }
  ~node()
  {
    int val=this->data;
    if(next!=NULL)
    {
      delete next;
      next=NULL;
    }
    cout<<"memory is free for data"<<val<<endl;
  }
};
void print(node* head)
{
  node* temp=head;
  while(temp!=NULL)
  {
    cout<<temp->data<<" ";
    temp=temp->next;
  }
  cout<<endl;
}
int Length(node* head)
{
  int cnt=0;
  node* temp=head;
  while(temp!=NULL)
  {
    cnt++;
    temp=temp->next;
  }
  return cnt;
}
void insertAtHead(node* &head ,node* & tail,int d)
{
  if(head==NULL)
  {
    node* temp=new node(d);
    head=temp;
    tail=temp;
  }
  else{
    node* temp=new node(d);
    temp->next=head;
    head->prev=temp;
    head=temp;
  }
}
void insertAtTail(node* &head,node* &tail,int d)
{
  if(tail==NULL)
  {
node* temp=new node(d);
    tail=temp;
     head=temp;
  }
  else{

      node* temp=new node(d);
      tail->next=temp;
      temp->prev=tail;
      tail=temp;
  }
}

void insertAtPosition(node* &head ,node* &tail,int pos,int d)
{
  if(pos==1)
  {
    insertAtHead(head,tail,d);
    return;
  }
  node* temp=head;
  int cnt=1;
  while(cnt<pos-1)
  {
    temp=temp->next;
    cnt++;
  }
if(temp->next==NULL)
{
  insertAtTail(head,tail,d);
  return;
}
node* nodeToInsert=new node(d);
nodeToInsert->next=temp->next;
temp->next->prev=nodeToInsert;
temp->next=nodeToInsert;
nodeToInsert->prev=temp;

}

void deleteNode(node* &head,int position)
{
  if(position==1)
  {
    node* temp=head;
    temp->next->prev=NULL;
    head=temp->next;
    temp->next=NULL;
    delete temp;

  }
  else
  {
    node* curr=head;
    node* prev=NULL;
    int cnt=1;
    while(cnt<position)
    {
      prev=curr;
      curr=curr->next;
      cnt++;
    }

  curr->prev=NULL;
  prev->next=curr->next;
  curr->next=NULL;
  delete curr;
  }


}

int main()
{
    node* head=NULL;
    node* tail=NULL;
    cout<<Length(head)<<endl;
    insertAtHead(head,tail,8);
    print(head);
     insertAtHead(head,tail,18);
    print(head);
     insertAtHead(head,tail,28);
    print(head);
     insertAtHead(head,tail,38);
    print(head);
    insertAtTail(tail,tail,48);
    print(head);
    insertAtPosition(head,tail,4,1000);
    print(head);
    deleteNode(head,1);
    print(head);
    return 0;
}
#include<bits/stdc++.h>
using namespace std;
struct Node{
    int data;
    struct Node* frist;
    struct Node* second;
};
struct Node* head;
void insert(int value)
{
  struct Node* temp = new struct Node;
  temp->data = value;
  temp->frist = NULL;
  temp->second = NULL;
  if(head==NULL)
  head = temp;
  else{
    struct Node* t = head;
    while(1)
    {
      if(value>=t->data&&t->second!=NULL)
        t=t->second;
        else if(value>=t->data&&t->second==NULL)
        {
            t->second=temp;
             break;

        }
        else if(value<t->data&&t->frist!=NULL)
        {
            t=t->frist;
        }
        else if(value<t->data&&t->frist==NULL)
        {
            t->frist=temp;
            break;
        }
       
    }
  }
}
void search(int value)
{
    struct Node* t=head;
    while(1)
    {
        if(t==NULL)
        {
            cout<<"search is unsuccessful"<<endl;
            break;
        }
        if(t->data==value)
        {
        cout<<"search is successful"<<endl;
        break;
        }
        else if(t->data>value)
        t=t->frist;
        else if(t->data<value)
        t=t->second;
    }
}
void printTree(struct Node* root)
{
    if(root == NULL){
        return;
    }
    cout<<root->data<<":";
    if(root->frist == NULL){
    }
    else
        cout<<root->frist->data<<" ";
    if(root->second == NULL){}
    else
        cout<<root->second->data<<" ";
        cout<<endl;
    printTree(root->frist);
    printTree(root->second);
}
int main()
{
    head=NULL;
    insert(3);
    insert(2);
    insert(4);
    insert(1);
    insert(2);
    insert(3);
    insert(6);
   search(6);
   search(5);
   printTree(head);
    
}
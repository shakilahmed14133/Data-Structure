#include<bits/stdc++.h>
using namespace std;
struct Node{
    int data;
    struct Node* first;
    struct Node* second;
};
struct Node* head;
void insert(int value)
{
    struct Node* temp = new struct Node;
    temp->data = value;
    temp->first = NULL;
    temp->second = NULL;
    if(head==NULL)
    {
    head = temp;
    }
    else
    {
        struct Node* t = head;
       // struct Node* t1=head;
        while(1)
        {
            if(value>=t->data&&t->second==NULL)
            {
             t->second=temp;
             break;
            }
            else if(value>=t->data&&t->second!=NULL)
            {
                t=t->second;
            }
            else if(value<t->data&&t->first==NULL)
            {
                t->first = temp;
                break;
            }
            else if(value<t->data&&t->first!=NULL)
            {
                t=t->first;
            }
        }
    }


}
void search(int item)
{
    struct Node* t1 = head;
   
    
    while(1)
    {
        if(t1==NULL)
        {
            cout<<"search is unsuccessful\n";
            break;
        }
        else if(t1->data==item)
    {
        cout<<"search is successful\n";
        break;
    }
        else if(t1->data<item)
        {
         t1=t1->second;
        }
        else if(t1->data>item)
        {
            t1= t1->first;
        }
    }
}
int main()
{
    head=NULL;
    insert(1);
    insert(4);
    insert(3);
    insert(2);
    search(5);
    search(4);

}
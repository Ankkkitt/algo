// does not have contigious memory like array
// one element is linked with another element with help of pointer variable
// size is modifiable
// node = data and next 

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class node{

    public:
    int data;
    node *next;

    node(int x){
        data=x;
        next=NULL;
    }
};

void display(node *head){

    node *curr=head;
    while(curr!=NULL)
    {
        cout<<curr->data<<" ";
        curr=curr->next;
    }
}

int main()
{
    node *head=new node(10);
    head->next=new node(20);
    head->next->next=new node(30);

    display(head);

}
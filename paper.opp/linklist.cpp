#include<iostream>
using namespace std;
class node{
    public:
    int data;
    node*next;
    node(int val){
        data=val;
        next=NULL;
    } 
};
class list{
    node* head;
    node* tail;

public:
list(){
    head=tail=NULL;
    }
    void push_front(int val){
        node* newNode= new Node(val);
    }
    if(head==NULL){
        head=tail=newNode;
        return 0;
    }else{
        newNode->next=head;
        head=newNode;
    }
};
int main()
{
    list s;
}
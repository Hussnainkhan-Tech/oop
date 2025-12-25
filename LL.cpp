#include<iostream>
using namespace std;
class node{
    public:
    int data;
    node* next;
    node(int val){
        data=val;
        next=NULL;
    }
};
class list{
    private:
    node* head;
    node* tail;
    public:
    list(){
        head=tail=NULL;
    }
    void push_back(int val){
        node* newNode=new node(val);
        if(head==NULL){
            head=tail=newNode;
        }
        else{
            tail->next=newNode;
            tail=newNode;
        }
    }
    void pop_front(){
        
        if(head==NULL){
            return;
        }
        node*temp=head;
        head=head->next;
        temp->next=NULL;
        delete temp;
     }

     void pop_back(){
        if(head==NULL){
            return;
        }
        node*temp=head;
        while(temp->next!=tail){
            temp=temp->next;
        }
        temp->next=NULL;
        delete tail;
        temp=tail;

     }
    void show(){
        node*temp=head;
        while(temp!=NULL){
            cout<<temp->data<<"->";
            temp=temp->next;

        }
        cout<<"NULL"<<endl;
    }
};
int main(){
    list s;
    s.push_back(12);
    s.push_back(24);
    s.push_back(34);
    s.push_back(23);
    s.pop_front();
    s.pop_back();
    s.show();
    return 0;

}
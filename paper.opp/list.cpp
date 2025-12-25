// // #include<iostream>
// // using namespace std;
// // class node{
// //     public:
// //     int data;
// //     node* next;
// //     node(int val){
// //         data=val;
// //         next=NULL;
// //     }
// // };
// // class list{
// //     private:
// //     node* head;
// //     node* Tail;
// //     public:
// //     list(){
// //         head=Tail=NULL;
// //       }
// //     void push_front(int val){
// //      node* newNode=new node(val);
// //         if(head==NULL){
// //             head=Tail=newNode;
// //         }
// //         else
// //         {
// //                 newNode->next=head;
// //                 head=newNode;
// //             }
// //         }
    
// //     void show(){
// //         node*temp=head;
// //         while(temp!=NULL){
// //             cout<<temp->data<<" ";
// //             temp=temp->next;
// //         }
// //         cout<<endl;
// //     }

// // };
// // int main(){
// //     list s;
// //     s.push_front(1);
// //     s.push_front(2);
// //     s.push_front(3);
// //     s.push_front(4);
// //     s.push_front(5);
// //     s.push_front(6);
// //     s.push_front(7);
// //     s.show();
// //     return 0;

// // }


// #include<iostream>
// using namespace std;
// class node{
//     public:
//     int data;
//     node* next;
//     node(int val){
//         data=val;
//         next=NULL;
//     }
// };
// class list{
//     node*head;
//     node*tail;
// public:
// list(){
// head=tail=NULL;
// }
// void push_front(int val){
// node*newNode=new node(val);
// if(head==NULL){
//     head=tail=newNode;
// }
// else{
//     newNode->next=head;
//     head=newNode;
// }
// }
// void show(){
//     node*temp=head;
//     while(temp!=NULL){
//         cout<<temp->data<<"  ";
//        temp= temp->next;
//     }
// }

// };
// int main(){
//     list s;
//     s.push_front(1);
//     s.push_front(2);
//     s.push_front(3);
//     s.push_front(4);
//     s.show();
//     return 0;

// }


// #include<iostream>
// using namespace std;
// class node{
//     public:
//     int data;
//     node* next;
//     node(int val){
//         data=val;
//         next=NULL;

//     }

// };

// class list{
//     private:
//     node* head;
//     node* tail;
//     public:
//     list(){
//         head=tail=NULL;
//     }
//     void push_front(int val){
//         node*newNode=new node(val);
//         if(head==NULL){
//             head=tail=newNode;
//         }
//         else
//         {
//             newNode->next=head;
//             head=newNode;
//         }
//     }
//     void show(){
//         node*temp=head;
//         while(temp!=NULL){
//             cout<<temp->data<<" ";
//             temp=temp->next;
//         }
//         cout<<endl;
//     }
// };
// int main(){
//     list s;
//     s.push_front(1);
//     s.push_front(2);
//     s.push_front(3);
//     s.push_front(4);
//     s.push_front(5);
//     s.show();
//     return 0;

// }


// #include<iostream>
// using namespace std;
// class node{
//     public:
//     int data;
//     node* next;
//     node(int val){
//         data=val;
//         next=NULL;
//     }
// };
// class list{
//     private:
//     node* head;
//     node* tail;
//     public:
//     list(){
//         head=tail=NULL;
//     }
//     // void push_front(int val){
//     //     node*newNode=new node(val);
//     //     if(head==NULL){
//     //         head=tail=newNode;
//     //     }back
//     //     else{
//     //         newNode->next=head;
//     //         head=newNode;
//     //     }
//     // }
//     void push_back(int val){
//         node*newNode=new node(val);
//         if(head==NULL){
//             head=tail=newNode;
//         }
//         else{
//             tail->next=newNode;
//             tail=newNode;
//         }
//     }

// void pop_front(){
//     if(head==NULL){
//         return;
//     }
//     node*temp=head;
//     head=head->next;
//     temp->next=NULL;
//     delete temp;
// }
//     void show(){
//         node*temp=head;
//         while(temp!=NULL){
//             cout<<temp->data<<" ";
//             temp=temp->next;
//         }
//     }
// };
// int main(){
//     list s;
//     s.push_back(1);
//     s.push_back(2);
//     s.push_back(3);
//     s.push_back(4);
//     s.push_back(1);
//     s.push_back(6);
//     s.pop_front(); 

//     s.show();
//     return 0;

// }

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
    private:
    node* head;
    node* tail;
    public:
    list(){
        head=tail=NULL;
    }
    void push_front(int val){
        node*newNode=new node(val);
        {
        if(head==NULL){
            head=tail=newNode;
        }
        else
        {
           newNode->next=head;
           head=newNode;
        }
    }
}
    void push_back(int val){
        node*newNode=new node(val);
        
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
void display(){
    node*temp=head;
    while(temp!=NULL){
        cout<<temp->data<<"->";
        temp=temp->next;
    }
    cout<<"NULL<"<<endl;
}
};
int main(){
    list khan;
    khan.push_front(1);
    khan.push_front(2);
    khan.push_front(65);
    khan.push_front(100);
    khan.push_front(12);
    khan.push_back(1000);
    khan.push_back(233);
    khan.push_back(98);
    khan.pop_front();

    khan.display();
    return 0;

}
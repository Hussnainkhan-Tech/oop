// #include<iostream>
// using namespace std;
// class Student{
//     private:
//     int rollNo;
//     string name;
//     public:
//     Student(){
//         rollNo=0;
//         name="unknown";
//     }
//     Student(int r,string n){
//         rollNo=r;
//         name=n;
//     }
//     Student(Student &s){//shaloow copy
//         rollNo=s.rollNo;
//         name=s.name;
//     }
//     void setName(string n){
//         name = n;
//     }
//     void setRollno( int a){
//         rollNo=a;
//     }
//     void show(){
//         cout<<"your name is ::"<<name<<endl;
//         cout<<"your roll number is::"<<rollNo<<endl;
//     }
  
// };
// int main(){
//     Student s,s1;
//     s.show();
//     s1.setName("hasnian khan");
//     s1.setRollno(47);
//     s1.show();
//     Student s2=s1;
//     s2.setName("hasnain master of AI");
//     s2.show();

    
//     return 0;

// }

#include<iostream>
using namespace std;
class Student{
    private:
    int *rollNo;
    string *name;
    public:
    
    Student(int r,string n){
        rollNo=new int(r);
        name=new string(n);
    }
    Student(Student &s){
        rollNo=new int(*s.rollNo);
        name=new string(*s.name);
    }
    void setName(string n){
        name =new string(n);
    }
    void setRollno( int a){
        rollNo=new int(a);
    }
    void show(){
        cout<<"your name is ::"<<*name<<endl;
        cout<<"your roll number is::"<<*rollNo<<endl;
    }
    ~Student(){
        delete name;
        delete rollNo;
    }
  
};
int main(){
    Student s1(47,"hasnain");
    s1.setName("hasnian khan");
    s1.setRollno(47);
    s1.show();
    Student s2=s1;
    s2.setName("hasnain master of AI");
    s2.show();

    
    return 0;

}
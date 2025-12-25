#include<iostream>
using namespace std;


class student{
private:
int *number;
int *rollnumber;

public:
student(int a,int b){
    number=new int(a);
    rollnumber=new int(b);
    cout<<"Your number is "<<*number<<endl<<"your roll number is "<<*rollnumber<<endl;
}
student(student & s){
    number=new int(*s.number);
    rollnumber=new int(*s.rollnumber);
    cout<<"Your number is "<<*number<<endl<<"your roll number is "<<*rollnumber;
}
   student() {
        delete number;
        delete rollnumber;
   }
};


int main(){

student s1(1000,35);
student s2=s1;



    return 0;
}
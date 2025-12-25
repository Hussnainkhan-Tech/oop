#include<iostream>
using namespace std;
// class teacher{
//     private:
//     string *name;
//     string *dep;
//     public:
//      teacher() {
//         name = new string("unknown");
//         dep =new string ("not assigned");
//     }
//     //parameterize constructor
//     teacher(string a, string b){
//         name=new string(a);
//         dep=new string(b);
//     }
//     teacher(teacher &s){
//         name=new string(*s.name);
//         dep=new string(*s.dep);
//     }
//     void setName(string a){
//         name=new string(a);
//     }
//     void setDep(string b){
//         dep=new string(b);
//     }
//     void show(){
//         cout<<"Teacher name is ::"<<*name<<endl;
//         cout<<"Depertment is ::"<<*dep<<endl;
//     }
//     ~teacher(){
//         delete name;
//         delete dep;
//     }

// };
// int main(){
//     teacher s1,s2;
//     s1.setName("masroor");
//     s1.setDep("Computer science");
//     s1.show();
//      s2=s1;
//      s2.setDep("MAth deperatment");
//      s2.show();
//      teacher s3=s2;
//      s3.setDep("physics deperatment");
//      s3.show();
//      teacher s4=s3;
//      s4.setDep("english deperatment");
//      s2.show();
//      teacher s5=s4;
//      s5.setDep("educational deperatment");
//      s5.setName("Hasnain khan");
//      s5.show();
//      teacher s6=s5;
//      s6.setDep("ECO deperatment");
//      s6.setName("wasif khan");
//      s6.show();
//     return 0;



// }
//opertaor overloading

// class math
// {
//     private:
//     int number;
//     public:
//     math(){
//         number=0;
//     }
//     math(int a){
//         number=a;
//     }
// void show()
// {
//     cout<<"sum of number is::"<<number;
// }
// math operator+(math &r){
//     math temp;
//     temp.number=number+r.number;
//     return temp;
// }
    
// };
// int main(){
//     math s;
//     math s1(12);
//     s1.show();
//     math s2(25);
//     s2.show();
//     math s3=s2+s1;
//     s3.show();
//     return 0;
// }

//assiociation (weak & strong realtionship)

// class eingne{
//     public:
//     void show(){
//         cout<<"engine is started::"<<endl;
//     }
// };
// class car{
// public:
//     void display(){
//         cout<<"car is moving"<<endl;
//     }
// };
//     int main(){
//         eingne s;
//         s.show();
//         car c;
//         c.display();
//         return 0;
//     }

//strong relationship
class eingne{
    public:
    void show(){
        cout<<"engine is started::"<<endl;
    }
};
class car{
    private:
    eingne n;
public:
    void display(){
        cout<<"car is moving"<<endl;
        n.show();
    }
};
    int main(){
        car c;
        c.display();
        return 0;
    }



// #include<iostream>
// using namespace std;
// class student
// {
//     private:
//     int rollNo;
//     float marks;
//     string name;
//     public:
//     // default constructor
//     student()
//     {
//         rollNo=0;
//         marks=0.0;
//         name="unknown";
//     }
//     // paramiterized constructor
//     student(int a,float b, string c)
//     {
//         rollNo=a;
//         marks=b;
//         name=c;
//     }
//     ~student()
//     {
        
//     }
//     void display()
//     {
//         cout<<"rollno is::"<<rollNo<<endl;
//         cout<<"your marks is::"<<marks<<endl;
//         cout<<"your name is::"<<name<<endl;
//     }

    
//     void setshow(int a,string c)
//     { 
//         rollNo=a;
//         name=c;
//     }
//     void getshow()
//     {
//         cout<<"update the value::"<<endl;
//         cout<<"now your roll number is::"<<rollNo<<endl;
//         cout<<"now your name is ::"<<name;
//     }

// };
// int main()
// {
//     student s;
//     s.display();
//     student s2(1,4.68,"hasnain_khan");
//     s2.display();
//     student s3=s2;
//     s3.display();
//     student s4(23,12.12,"wasif");
//     s4.setshow(12,"masroor");
//     s4.getshow();

//     return 0;
// }



#include<iostream>
using namespace std;
class student
{
    private:
    int rollNo=0;
    string name="*";
    float marks=0;
    char grade='*';

    public:
    // student()
    // {
    //     int rollNo;
    //     string name;
    //     float marks;
    //     char grade;
    // }
    student(int a,string b,float c,char d)
    {
         rollNo=a;
         name=b;
         marks=c;
         grade=d;
    }
        void setname(string a)
        {
            name=a;
        }
         void setrollNo(int b)
        {
            rollNo=b;
        }
         void setmarks(float c)
        {
            marks=c;
        }
         void setgrade(char d)
        {
            grade=d;
        }
    void display()
    {
        cout<<"your rollno is::"<<rollNo<<endl;
        cout<<"your name is::"<<name<<endl;
        cout<<"your marks is::"<<marks<<endl;
        cout<<"your grade is::"<<grade<<endl;
    }

};
int main()
{   

    // s.display();

    student s1(47,"Hasnain",842,'B');
    s1.display();

    student s2=s1;
    s2.setname("konain khan");
    s2.setrollNo(12);
    s2.setmarks(12443);
    s2.setgrade('Z');
    s2.display();
    return 0;
}

























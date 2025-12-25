// // #include<iostream>
// // using namespace std;
// // student student
// // {
// //     private:
    
// //         int RollNo;
// //         string name;
// //         char grade;
// //         float percentage;
// //     public:
// //     void setRollNo(int a)
// //     {
// //         RollNo=a;
// //     }
// //     void rollNo()
// //     {
// //         cout<<"ROLL NUMBER OF THE STUDENT IS ::"<<RollNo<<endl;
// //     }

// //     void setName(string a)
// //     {
// //         name=a;
// //     }
// //     void showname()
// //     {
// //         cout<<"STUDENT NAME::"<<name<<endl;
// //     }
// //     void setgrade(char a)
// //     {
// //         grade=a;
// //     }
// //     void showgrade()
// //     {
// //         cout<<"YOUR GRADE IS ::"<<grade<<endl;
// //     }
// //     void setper(float a)
// //     {
// //         percentage=a;
// //     }
// //     void showper()
// //     {
// //         cout<<"YOUR PERCENTAGE IS ::"<<percentage<<endl;
// //     }
// // };
// // int main()
// // {
// //     student n;
// //     n.setRollNo(47);
// //     n.rollNo();
// //     n.setName("HUSNAIN KHAN");
// //     n.showname();
// //     n.setgrade('A');
// //     n.showgrade();
// //     n.setper(77.79);
// //     n.showper();


// //     return 0;
// // }



// #include<iostream>
// using namespace std;

// struct Student {
// private:
//     int rollNo;
//     string name;
//     string fatherName;
//     string group;
//     int marks;

// public:
//     void setData(int r, string n, string f, string g, int m) {
//         rollNo = r;
//         name = n;
//         fatherName = f;
//         group = g;
//         marks = m;
//     }

//     int getRollNo() {
//         return rollNo;
//     }

//     void showData() {
//         cout << "Name: " << name << endl;
//         cout << "Father Name: " << fatherName << endl;
//         cout << "Group: " << group << endl;
//         cout << "Marks: " << marks << endl;
//     }
// };

// int main() {
//     Student s[5];

//     // Data set kar rahe hain using setData()
//     s[0].setData(1, "Ali", "Ahmed", "Science", 450);
//     s[1].setData(2, "Hassan", "Rashid", "Commerce", 420);
//     s[2].setData(3, "Fatima", "Zeeshan", "Arts", 400);
//     s[3].setData(4, "Sara", "Iqbal", "Science", 460);
//     s[4].setData(5, "Umer", "Khalid", "Commerce", 430);

//     int roll;
//     cout << "Enter Roll Number (1 to 5): ";
//     cin >> roll;

//     if (roll == s[0].getRollNo()) {
//         s[0].showData();
//     }
//     else if (roll == s[1].getRollNo()) {
//         s[1].showData();
//     }
//     else if (roll == s[2].getRollNo()) {
//         s[2].showData();
//     }
//     else if (roll == s[3].getRollNo()) {
//         s[3].showData();
//     }
//     else if (roll == s[4].getRollNo()) {
//         s[4].showData();
//     }
//     else {
//         cout << "Record not found!" << endl;
//     }

//     return 0;
// }


// #include<iostream>
// using namespace std;
// class student
// { 
//         private:
//     int rollNo;
//     float marks;
//     char CGPA;
    
//     public:
//     student(int a , float b, char c)
//     {
//         rollNo=a;
//         marks=b;
//         CGPA=c;
//     }
//     void show()
//     {
//         cout<<"roll no ::"<<rollNo<<endl;
//         cout<<"marks:"<<marks<<endl;
//         cout<<"CGPA::"<<CGPA<<endl;
        
//     }

// };
// int main()
// {
//     student s(1,31.12,'A');
//     s.show();
   

    
// }




#include<iostream>     // include the iostream library (a preprocessor directive)
#include<math.h>
using namespace std;     // use the stanadard namespace
int sum1(int a);
int differ(int );
int div (int );
int mul (int);
int rem(int);
int a;
int main ()               // main function from where execution starts
{

int  c;
char ch;
int b;
cin>>b;

while (ch!='\n')
{

   int z=b;
if (ch == '+')

   {
   cin>>a;
  c=z+sum1(a);
   }
   
else if ( ch == '-')

 {
   cin>>a;
   int d = differ(a);
   if ( d < 0)
   
  c=z+d;
  else
  c= z-d;
  
   }
   
else if ( ch == '/')

 {
   cin>>a;
  c=z/div(a);
   }   
   
else if ( ch == '*')

 {
   cin>>a;
  c=z*mul(a);
   }   
	else if(ch=='^')
	{
		cin>>a;
		c=pow(z,a);
	}
      
ch=cin.get(); 
}
cout<<c;
	
   return 0; //return 0 to operating system
}
int sum1(int a)

{
static	int sum =0;
return sum=sum+a;	
}
int differ(int a)
{
	static int diff =0;
	return diff=diff-a;
}

int div (int a)
{
		static int division =a;
	return division;
}
int mul (int)
{
static	int m=1;
return m=m*a;
}
int pow( int a )
{
		static int pow=a;
	return pow;
	
}
#include<iostream>
using namespace std;
// int add(int a, int b)
// {
// return (a+b);
// }
// int sub(int a, int b)
// {
//     return a-b;
// }
// float divide(int a , int b)
// {
//     if(b==0)
//    { cout<<"Error,coz zero value does'nt allowed"<<endl;
// return 0;}
   
//  else 
//     {
//     return (float)a/b; 
// }}

int main()
{
    int a,b,n;
    {
        cout<<"CHOOSE THE METHOD "<<endl;
        cout<<"1: SUM"<<endl;
        cout<<"2: SUBTRACT"<<endl;
        cout<<"3: DIVIDE"<<endl;
        cout<<"PRESS THE KEY WHO YOU WANT::";
        cin>>n;
    }
    
    if (n==1)
    {cout<<"YOU SELECT THE SUM"<<endl;
    cout<<"enter the first value::";
    cin>>a;
    cout<<"enter the second value::";
    cin>>b;
    cout<<add(a,b);}
    else if (n==2)
    {
    cout<<"YOU SELECT THE SUBTRACT"<<endl;
    cout<<"enter the first value::";
    cin>>a;
    cout<<"enter the second value::";
    cin>>b;
    cout<<sub(a,b);
}
else if(n==3)

{
    cout<<"YOU SELECT THE DIVIDE"<<endl;
    cout<<"enter the first value::";
    cin>>a;
    cout<<"enter the second value::";
    cin>>b;
    cout<<divide(a,b);

}
else{
    cout<<"O BHAI BS KR....";
}
    return 0;
}


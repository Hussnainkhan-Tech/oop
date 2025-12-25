#include<iostream>
using namespace std;
class engine{
    private:
    string car_name;
    int rate;
    string color;
    public:
    engine(){
        car_name="bhai";
        rate=0;
        color=" ";
    }
    engine(string a,int b,string c){
        car_name=a;
        rate=b;
        color=c;
    }
    void car(){
        cout<<"your car name is::"<< car_name<<endl;
        cout<<"your car rate is::"<< rate<<endl;
        cout<<"your car color is::"<< color<<endl;

    }

};
int main()
{
    engine a("BUGATI",1299,"PINKBLACK");
    a.car();
    return 0;
}
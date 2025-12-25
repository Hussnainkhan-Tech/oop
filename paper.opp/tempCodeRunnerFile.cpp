
#include<iostream>
using namespace std;
class khan{
    private:
    int A1[3][6];
    int A2[3][6];
    int A3[3][6];
    public:
    void input_value(){
        cout<<"enter the value of first array::";
        for(int i=0;i<3;i++){                   
            for(int j=0;j<6;j++)
        
    {
    cin>>A1[i][j];
    }
}


    cout<<"enter the value of the A2[]::";
            for(int i=0;i<3;i++){
            for(int j=0;j<6;j++)
        
    {
    cin>>A2[i][j];
    }
}
    }
    void sum(){
        for(int i=0;i<3;i++){
            for(int j=0;j<6;j++ )
        {
        A3[i][j]=A1[i][j]+A2[i][j];
    }
        }
            }
    void show(){
          for(int i=0;i<3;i++){
            for(int j=0;j<6;j++ ){
        cout<<A3[i][j]<<\t;
          }
          cout<<endl;
}
    }
};
int main(){
    khan obj;
    obj.input_value();
    obj.sum();
    obj.show();
    return 0;
}
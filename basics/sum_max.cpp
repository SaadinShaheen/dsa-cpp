#include <iostream>
using namespace std;

int main()
{
    int a, b;
    cout<<"Enter Integers a and b: ";
    cin>>a>>b;
    int sum = a+b;
    cout<<"Sum = "<<sum<<endl;
    if (a>b){
        cout<<"Integer a is larger"<<endl;
    }
    else if (a == b){
        cout<<"Integers are equal"<<endl;
    }
    else{
        cout<<"Integer b is larger"<<endl;
    }
}
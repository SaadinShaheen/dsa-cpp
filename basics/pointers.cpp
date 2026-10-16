#include <iostream>
using namespace std;

void increment(int *p)
{
    *p +=1;
}
int main()
{
    int x = 10;
    // Pointer declaration
    int *p = &x;
    cout<<"x = "<<x<<endl;
    cout<<"&x = "<<&x<<endl<<endl;
    cout<<"p = "<<p<<" p+1 = "<<p+1<<endl;
    cout<<"*p = "<<*p<<endl<<endl;

    // Chnaging value through pointer
    *p = 25;
    cout<<"x = "<<x<<endl<<endl;

    increment(&x);
    cout<<"x = "<<x<<endl<<endl;

    int a[4] = {10, 20, 30, 40};
    int *q = a;
    int size = sizeof(a)/sizeof(a[0]);
    for(int i=0; i<size; i++){
        cout<<*(q+i)<<" ";
    }
    cout<<endl;

    return 0;
}
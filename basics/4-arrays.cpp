#include <iostream>
using namespace std;

int sum(int a[], int l)
{
    int s = 0;
    for(int i=0; i<l; i++){
        s += a[i];
    }
    return s;
}
int main()
{
    int a[5] = {4, 5, 9, 6, 2};
    int size = sizeof(a)/sizeof(a[0]);
    for(int i=0; i<size; i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
    cout<<"Array Sum = "<<sum(a,size)<<endl;
    cout<<a[7]<<endl;
    return 0;
}
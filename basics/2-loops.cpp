#include <iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Part-1\n";
    cout<<"Enter 1st integer: ";
    cin>>n;
    int sum=0;
    for(int i=1; i<=n; i++){
        sum+=i;
    }
    cout<<"Total = "<<sum<<endl;

    cout<<"Part-2\n";
    int m;
    cout<<"Enter 2nd integer: ";
    cin>>m;
    int i=0;
    do{
        i++;
        m/=10;
    }
    while(m!=0);
    cout<<"Total Digits = "<<i<<endl;
    return 0;
}
#include <iostream>
using namespace std;

int factorial(int n)
{
    if(n==1)
        return 1;
    else
        return n * factorial(n-1);
}

int sumTo(int n)
{
    if(n==0)
        return 0;
    else
        return n + sumTo(n-1);
}

int main()
{
    cout<<factorial(5)<<endl;
    cout<<sumTo(5)<<endl;
    return 0;
}
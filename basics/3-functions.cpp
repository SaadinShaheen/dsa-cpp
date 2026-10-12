#include <iostream>
using namespace std;

int maxOf(int a, int b)
{
    if (a > b){
        return a;
    }
    else{
        return b;
    }
}

void swapValues(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}

int main()
{
    int x = 3, y = 8;
    cout<<"maxOf(x, y) = "<<maxOf(x, y)<<endl;
    cout<<"Before Swapping\nx = "<<x<<" y = "<<y<<endl;
    swapValues(x,y);
    cout<<"After Swapping\nx = "<<x<<" y = "<<y<<endl;
    return 0;
}
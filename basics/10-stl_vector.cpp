#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> v;

    v.push_back(10);
    v.push_back(20);
    v.push_back(30);

    cout<<"Size of vector = "<<v.size()<<endl;
    cout<<"Front = "<<v.front()<<", Back = "<<v.back()<<endl<<endl;

    v.pop_back();
    cout<<"After pop_back()"<<endl;
    cout<<"Size = "<<v.size()<<", Back = "<<v.back()<<endl<<endl;

    cout<<"Is empty = "<<v.empty()<<endl<<endl; // 0 -> means "not empty"
    
    v.clear();
    cout<<"After v.clear()"<<endl;
    cout<<"Size = "<<v.size()<<endl;
    cout<<"Is empty = "<<v.empty();
    return 0;
}
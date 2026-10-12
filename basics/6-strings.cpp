#include <iostream>
#include <string>
using namespace std;

int main()
{
    string str;
    // Reading a string
    cout<<"Enter a string: ";
    getline(cin, str);
    cout<<"String is "<<str<<endl;
    
    // Finding length
    int size = str.size(); // or str.length()
    cout<<"Length of string: "<<size<<endl;
    
    // Reversing a string
    string rev;
    for(int i=size-1; i>=0; i--){ // (size - 1) because it is 0-based indexing 
        rev.push_back(str[i]); // or rev += str[i]
    }
    cout<<"Reversed String is "<<rev<<endl;

    // Palindrome check
    if(str == rev){
        cout<<str<<" is Palindrome"<<endl;
    }
    else{
        cout<<str<<" is not Palindrome"<<endl;
    }
    return 0;
}
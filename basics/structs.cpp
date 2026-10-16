#include <iostream>
#include <string>
#include <vector>
using namespace std;

struct Student
{
    string name;
    int marks;
};

struct Node
{
    int value;
    Node* next;
};

int main()
{
    // Method 1 of declaring object of structure
    Student s1;
    s1.name = "Alice";
    s1.marks = 74;
    cout<<"--- STUDENT 1 ---\n";
    cout<<"Name = "<<s1.name<<endl;
    cout<<"Marks = "<<s1.marks<<endl<<endl;

    // Method 2 of declaring object of structure
    cout<<"--- STUDENT 2 ---\n";
    Student s2 = {"Bob", 78};
    cout<<"Name = "<<s2.name<<endl;
    cout<<"Marks = "<<s2.marks<<endl<<endl;

    // Taking user input
    cout<<"--- STUDENT 3 ---\n";
    Student s3;
    cout<<"Enter Name: ";
    getline(cin, s3.name);
    cout<<"Enter Marks: ";
    cin>>s3.marks;
    cin.ignore(); // removes leftover newline
    cout<<"\nName = "<<s3.name<<endl;
    cout<<"Marks = "<<s3.marks<<endl<<endl;

    // Array of structs
    Student students[3] = {
        {"George", 58},
        {"Emily", 55},
        {"Peter", 79}
    };

    for(int i=0; i<3; i++){
        cout<<"Name = "<<students[i].name<<endl;
        cout<<"Marks = "<<students[i].marks<<endl<<endl;
    }

    // Vector of structs
    vector<Student> v;
    int n = 2;
    for(int i=0; i<n;i++){
        Student temp;
        cout<<"Enter vector {Name, Marks} "<<i<<":"<<endl;
        getline(cin, temp.name);
        cin>>temp.marks;
        cin.ignore();
        v.push_back(temp);
    }

    int size = v.size();
    for(int i=0; i<size; i++){
        cout<<"Name = "<<v[i].name<<endl;
        cout<<"Marks = "<<v[i].marks<<endl<<endl;
    }

    Student best = v[0];
    for(int i=0; i<size; i++){
        if(best.marks<v[i].marks){
            best.marks = v[i].marks;
            best.name = v[i].name;
        }
    }
    cout<<"Best Name = "<<best.name<<" Best Marks = "<<best.marks<<endl<<endl;
    // Node 1
    Node a, b, c;
    a.value = 10;
    b.value = 20;
    c.value = 30;

    a.next = &b;
    b.next = &c;
    c.next = nullptr;

    Node* cur = &a;
    while(cur != nullptr){
        cout<<cur->value<<"->";
        cur = cur->next;
    }
    cout<<"NULL"<<endl;
    return 0;
}
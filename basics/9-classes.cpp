#include <iostream>
using namespace std;

class Rectangle
{
    private:
        float width, height;
    
    public:
        Rectangle(float w, float h)
        {
            width = w;
            height = h;
        }

        float area()
        {
            return width * height;
        }

        float perimeter()
        {
            return 2*(width + height);
        }
        
        bool isSquare()
        {
            return width == height;
        }
};

class Student
{
    private:
        double marks;
    
    public:
        Student()
        {
            this->marks = 0;
        }

        double getMarks()
        {
            return marks;
        }

        void setMarks(double m)
        {
            if(m>0 && m<=100)
            {
                marks = m;
            }
        }
};
int main()
{
    float w, h;
    cout<<"Enter width: ";
    cin>>w;
    cout<<"Enter height: ";
    cin>>h;
    Rectangle r(w, h);
    cout<<r.area()<<endl;
    cout<<r.perimeter()<<endl;
    cout<<r.isSquare()<<endl;

    cout<<endl;
    Student s1;
    double marks;
    cout<<"Enter Marks: ";
    cin>>marks;
    s1.setMarks(marks);
    cout<<"Marks = "<<s1.getMarks()<<endl;
    return 0;
}
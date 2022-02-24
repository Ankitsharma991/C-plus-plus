#include <iostream>

using namespace std;

class Number
{
    int a;

public:
    Number()
    {
        a = 0;
    }
    Number(int num)
    {
        a = num;
    }

    Number(Number &obj)
    {
        cout<<"Copy constructor called !!"<<endl;
        a = obj.a;
    }

// when no any copy constructor found the compiler supplies its own copy constructor 

    void display()
    {
        cout << "The number for this object is " << a << endl;
    }
};
int main()
{
    Number x, y, z(45), z2;
    x.display();
    y.display();
    // z1 should exactly resemble z or x or y
    z.display();
    Number z1(z); // copy constructor invoke    
    z1.display();

    z2 = z; // copy constructor not called because this obj is already existed , if it's about to exist and not existed then it worked
    z2.display();
    Number z3 = z;
    z3.display();
    return 0;
}
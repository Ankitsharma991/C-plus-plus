#include<iostream>

using namespace std;
class BaseClass
{
public:
    int var_base = 7;
    virtual void display()
    {
        cout << "Displaying Base class variable var1 : " << var_base << endl;
    }
};

class DerivedClass : public BaseClass
{
    public:
        int var_derived = 5;
        void display()
        {
            cout << "1 Displaying Base class variable var1 : " << var_base << endl;
            cout << "2 Displaying Derived class variable var2 : " << var_derived << endl;
        }
    };

int main(){
    BaseClass * base_class_pointer;
    BaseClass obj_base;
    DerivedClass obj_derived;

    base_class_pointer = &obj_derived;
    base_class_pointer->display();
    return 0;
}
#include <iostream>

using namespace std;
class BaseClass
{
public:
    int var_base;
    void display()
    {
        cout << "Displaying Base class variable var1 : " << var_base << endl;
    }
};

class DerivedClass : public BaseClass
{
    public:
        int var_derived;
        void display()
        {
            cout << "Displaying Base class variable var1 : " << var_base << endl;
            cout << "Displaying Derived class variable var1 : " << var_derived << endl;
        }
    };

    int main()
    {
        BaseClass *base_class_pointer;
        BaseClass obj1;
        DerivedClass obj_derived;
        base_class_pointer = &obj_derived; // pointing base class pointer to derived class

        base_class_pointer->var_base = 25;
        // base_class_pointer->var_derived()=56; // throw an error
        base_class_pointer->display();

    DerivedClass * derived_class_pointer;
    derived_class_pointer = &obj_derived; 
    derived_class_pointer->var_derived=85;
    derived_class_pointer->display();
        return 0;
    }
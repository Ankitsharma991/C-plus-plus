/*
*************Constructors in Derived classes**********
1.We can use constructor in derived classes in c++
2.if a base constructor does not have any arguments, there is no need of any constructor in derived classes.
3.But if there are one or more arguments in the base class of constructor, derived class need to pass arguments to the base class constructor
4.if both base and derived classes have constructors, base class constructor is executed first
*/

/*************Constructor in multiple inheritance************
1. In multiple inheritance, base classes are constructed in the order in which they appear in the class declaration
**********************Multilevel inheritance***************
2.In multilevel inheritance, the constructors are executed in the order of inheritance
*/

/************* Special Syntax ********************************
1. C++ supports is an special syntax for passing arguments to multiple base classes
2. The constructor of the derived class receives all the arguments at once and then will pass the cells to the respective base classes
3. The body is called after all the constructor are finished executing.
Derived-Constructor (arg1, arg2, arg3, .......): Base I-constructor(arg1, arg2), Base2-Constructor(arg3, arg4){
    .....
}Base I-Constructor(arg1, arg2)
*/

/************ Special Case of virtual Base Class ********************************
1.The constructor for virtual base classes are invoked before an nonVirtual base class.
2.If there are multiple virtual base classes, they are invoked in the order declared.
3.Any non-virtual base class are then constructed before the derived class constructor is executed.

*/

/*
case1:
class B: public A{
    order of execution of constructor -> first A() then B();

};

Case2:
class A : public B, Public c{
    //order of execution of constructor -> first B() then C() and then A();
};

Case3:
class A: public B, virtual public C{
    order of execution of constructor -> first(C) then B() and then A();

};
*/
#include <iostream>
using namespace std;

class Base1
{
    int data1;

public:
    Base1(int i)
    {
        data1 = i;
        cout << "Base1 class constructor called" << endl;
    }
    void printData1(void)
    {
        cout << "the value of data1 is " << data1 << endl;
    }
};

class Base2
{
    int data2;

public:
    Base2(int i)
    {
        data2 = i;
        cout << "Base2 class constructor called" << endl;
    }
    void printData2(void)
    {
        cout << "the value of data2 is " << data2 << endl;
    }
};
class Derived : public Base1, public Base2
{
    int derived1, derived2;

public:
    Derived(int a, int b, int c, int d) : Base1(a), Base2(b)
    {
        derived1 = c;
        derived2 = d;
        cout << "Derived class constructor called" << endl;
    }
    void printData(void)
    {
        cout << "the value of derived1 is " << derived1<< endl;
        cout << "the value of derived2 is " << derived2<< endl;
    }
};

int main()
{
    Derived Ankit(1, 2, 3, 4);
    Ankit.printData1();
    Ankit.printData2();
    Ankit.printData();

    return 0;
}
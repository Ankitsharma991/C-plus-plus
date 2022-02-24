#include<iostream>

using namespace std;

//syntax for inheriting in multiple inheritance
// class Derived: visibility-mode base1, visibility-mode base2
// {
//     class body of class "DerivedC"
// };

class Base1{
    protected:
        int base1int;
    public : 
        void set_base1int(int a){
            base1int = a;

        }
};

class Base2{
    protected:
        int base2int;
    public : 
        void set_base2int(int b){
            base2int = b;

        }
};

class Base3{
    protected:
        int base3int;
    public : 
        void set_base3int(int c){
            base3int = c;

        }
};

class Derived : public Base1, public Base2, public Base3 {
    public : 
        void show(){
            cout << "The value of base1 is " << base1int << endl;
            cout << "The value of base2 is " << base2int << endl;
            cout << "The value of base3 is " << base3int << endl;
            cout << "The sum of these values is " << base1int + base2int + base3int << endl;
        }
};
/*
The inherited derived class will look something like this : base1int int main()
Data Members : 
    1.base1int == protected
    2.base2int == protected
Members function : 
    set_base1int()--> public 
    set_base2int()--> public
    set_base1int()--> public
*/

int main(){
    Derived Ankit;
    Ankit.set_base1int(25);
    Ankit.set_base2int(5);
    Ankit.set_base3int(50);
    Ankit.show();
    return 0;
}
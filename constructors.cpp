#include<iostream>

using namespace std;

class Complex{
    int a, b;
    public:
// Creating a constructor : is a special member function with same name as of the class.it is automatically invoked whenever an object is created
// it is used to initialise the objects of its class
    Complex(void);  // constructor declaration
    void printNumber(){
        cout<<"Your number is "<<a<<" + "<<b<<"i"<<endl;
    }
};
Complex :: Complex(void){       // this is default constructor as it takes no parameter
    // int p, q ;
    // cin>>a>>b;
    // a = p; 
    // b = q;
    a = 10 ;
    cout<<"Created By Ankit"<<endl;
    b = 5 ;
}
int main(){
    Complex c, c1, c2, c3, c4, c5;  
    c.printNumber();
    c2.printNumber();
    c3.printNumber();
    c4.printNumber();
    c5.printNumber();

    return 0;
}

/*
#properties of constructor : 
    1. it should be declared in the public section of the class   
    2. They are automatically invoked whenever the object is created 
    3. They cannot return values and do not have return types
    4. it can have default arguments 
    5. we cannot refer to their address
*/
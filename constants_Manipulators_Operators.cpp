#include<iostream>

#include<iomanip> // it's a manipulator after using this we can use the manipulator function SETW

using namespace std;

int main(){
////***************Variables and Constant variables****************
    // const int a=34; // variables values cannot be changed once it's value is declared as constant whether the variable is int , float , double or long double
    // cout<<"The value of a was: "<<a<<endl;
    // //a=45;
    // //char c = 'c'; 
    // cout<<"The value of a is : "<<a<<endl;

////**************** Manipulators in C++ ***************

    // int a=4, b=78, c=6512 ;
    
    // cout<<"The value of a without stew is "<<a<<endl;
    // cout<<"The value of b without stew is "<<b<<endl;
    // cout<<"The value of c without stew is "<<c<<endl;
 
    // cout<<"The value of a with setw is "<<setw(4)<<a<<endl;
    // cout<<"The value of b with setw is "<<setw(4)<<b<<endl;
    // cout<<"The value of c with setw is "<<setw(4)<<c<<endl;


////**********Operators Precedence**********
////in case of equal precedence the case of Associativity is applied
    int a = 3, b=4;
    int c = (((a*5)+b)-10);
    int d = ((c+(45*(8/2)))-10);
    cout<<c<<endl;
    cout<<d<<endl;
    return 0;
}
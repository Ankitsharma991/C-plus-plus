#include<iostream>

using namespace std;

int main(){
    //// pointer is datatype which hold the address of other variables or other data type
    int a=3;
    int * b = &a; // int* is use to declare pointer 

    // &-->Address of operator 
    cout<<"The address of a is "<<b<<endl;
    cout<<"The address of a is "<<&a<<endl;

    // *--> Dereference operator
    cout<<"the value at address b is "<<*b<<endl;

    // pointer of pointer
    int** c= &b;
    cout<<"The address of b is "<<c<<endl;
    cout<<"The address of b is "<<&b<<endl;
    cout<<"The value at c is "<<*c<<endl;
    cout<<"The value at address value at address value of c is "<<**c<<endl;
    return 0;
}
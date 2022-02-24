#include<iostream>

using namespace std;

int main(){
    // Basic Example
    int a, b ;

    cout<<"Enter your value"<<endl;
    cin>>a;
    int * ptr = &a;     // it could be int, float, string etc.
    // *ptr = 999;      // this will change the value of a

    cout<<"The value of a is "<<*ptr<<endl;
    cout<<"The address of the value of a is "<<&a<<endl;

    cout<<"Enter the next value"<<endl;
    cin>>b;

    int *p = new int(b);        // it could be int, float, string etc.
    cout<<"The value at the address p is "<<*p<<endl;
    cout<<"****************************************Array**********************************************"<<endl;
    int *arr = new int[4];

    arr[0] = 10;
    arr[1] = 20;
    arr[2] = 30;
    arr[3] = 40;
    arr[4] = 50;
    int *q = &arr[0];
    // delete [] arr;

    cout<<"The value of arr[0] is "<<arr[0]<<endl;
    cout<<"The value of arr[1] is "<<arr[1]<<endl;
    cout<<"The value of arr[2] is "<<arr[2]<<endl;
    cout<<"The value of arr[3] is "<<arr[3]<<endl;
    cout<<"The value of arr[4] is "<<arr[4]<<endl;
    cout<<"The address value of arr[0] is "<<&arr[0]<<endl;

    cout<<"-------------------------Delete Operator------------------------------------------"<<endl;

    return 0;
}
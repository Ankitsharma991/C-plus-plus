#include<iostream>

using namespace std;
int sum(int a, int b) {
    int c = a +b ;
    return c;
}
// this will not swap and b 
void swap(int a, int b) { // tepm a b 
    int temp = a;         // 4    4 5
    a = b ;               // 4    5 5
    b = temp ;            // 4    5 4
}
// call by reference using Pointers
void swapPointer(int*a , int*b){
    int temp = *a ; 
    *a =*b;
    *b = temp;
}
// call by reference using c++ reference variables
// void swapReferencevar(int&a , int&b){
//     int temp = a ; 
//     a =b;
//     b = temp;
// }
int & swapReferencevar(int&a , int&b){
    int temp = a ; 
    a =b;
    b = temp;
    return a ;
}
int main(){
    int x=14 , y = 50;
    // cout<<"The sum of 4 and 5 is "<<sum(4,5)<<endl;
    cout<<"The value of x is "<<x<<" and the value of y is "<<y<<endl;
    // swap(x, y); //// this will not swap the value of x and y  
    // swapPointer(&x,&y); //// this will exchange the value of a and b using pointer reference
    // swapReferencevar(x, y); //// this will swap thevalue of a and b using reference variables
    swapReferencevar(x, y)=766;
    cout<<"The value of x is "<<x<<" and the value of y is "<<y<<endl;
    return 0;
}
#include<iostream>

using namespace std;

int a=12;

int main(){
    ////**********Built in data type ****************
    // int a, b, c, d;

    // cout<<"Enter the value of a:"<<endl;
    // cin>>a;
    // cout<<"Enter the value of b:"<<endl;
    // cin>>b;
    // cout<<"Enter the value of c:"<<endl;
    // cin>>c;
    // d = a+b+c;
    // cout<<"The sum is: "<<d<<endl;
    // cout<<"The global value of a is : "<<::a<<endl;
        
       ////********float, Double and Long Double********** 
        // float e=44.2;
        // 35.5f ; // here f confirms that the 35.5 is a floating point number
        // cout<<"The size of 35.5 is "<<sizeof(35.5)<<endl;
        // cout<<"The size of 35.5f is "<<sizeof(35.5f)<<endl;
        // cout<<"The size of 35.5F is "<<sizeof(35.5F)<<endl;
        // cout<<"The size of 35.5l is "<<sizeof(35.5l)<<endl;
        // cout<<"The size of 35.5L is "<<sizeof(35.5L)<<endl;
        // long double f=44.22l; // here l confirms that the value 44.22 is a long double point number
        // //cout<<"The value of e is "<<e<<" And"<<" The value of f is "<<f<<endl;


////***************Reference Variables****************************
    // float x=455;
    // float & y = x; 
    // cout<<x<<endl;
    // cout<<y<<endl;


////************Typecasting*********
    int a = 45 ;
    float b = 25.65 ;
    // cout<<"The vale of a is "<<float(a)<<endl;
    // cout<<"The value of a is "<<(float)a<<endl;

    // cout<<"The vale of b is "<<int (b)<<endl;
    // cout<<"The value of b is "<<(int) b<<endl;
    int (c) = int(b) ; 
    // cout<<"The value of c is "<<c<<endl;
    cout<<"The expression is "<<a+b<<endl;
    cout<<"The expression is "<<a+int(b)<<endl;
    cout<<"The expression is "<<a+c<<endl;

    return 0;
}
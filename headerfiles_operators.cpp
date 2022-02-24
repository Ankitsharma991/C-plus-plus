# include<iostream>
// There are two types of header file : 
// 1. System header file : it comes with the compiler 
// 2. User defined header file : it is written by the programmer
#include "this.h" // here "this.h" is an user defined header which is in current directory so that the output won't give any error

using namespace std;
int main(){
    ///*cout<<"This is Hello world programe\n" ;*/
    int a, b ;
    cin>> a ;
    cin>> b;
    cout<<"Operatos in c++\n";
    cout<<"Followings are the typrs of operators in c++"<<endl;
    //Arithematic Operatos
    cout<<"the value of a+b : "<<a+b<<endl;
    cout<<"the value of a-b : "<<a-b<<endl;
    cout<<"the value of a*b : "<<a*b<<endl;
    cout<<"the value of a/b : "<<a/b<<endl;
    cout<<"the value of a%b : "<<a%b<<endl;
    cout<<"the value of a++ : "<<a++<<endl;
    //cout<<"the value of a+b : "<<a+b<<endl;
    cout<<"the value of a-- : "<<a--<<endl;
    cout<<"the value of ++a : "<<++a<<endl;
    cout<<"the value of b++ : "<<b++<<endl;
    cout<<"the value of b-- : "<<b--<<endl;
    cout<<"the value of ++b : "<<++b<<endl;
    cout<<"the value of --b : "<<--b<<endl;

    //ASSIGNMENT OPERATORS--->>used to assign values to variables
    // int a=4, b=5 ; 
    // char d='d';

    //COMPARISON OPERATORS--->>used to compare
    cout<<"The value of a==b is "<<(a==b)<<endl;
    cout<<"The value of a!=b is "<<(a!=b)<<endl;
    cout<<"The value of a>=b is "<<(a>=b)<<endl;
    cout<<"The value of a<=b is "<<(a<=b)<<endl;
    cout<<"The value of a>b is "<<(a>b)<<endl;
    cout<<"The value of a<b is "<<(a<b)<<endl;
    cout<<"The value of a==b is "<<(a==b)<<endl;

    //LOGICAL OPERATORS ---->> &&->"and operator" , ||-->>"or operator", !-->>"not operator"
    cout<<"The value of logical operator (a==b)&&(a<b) is "<<((a==b) && (a<b))<<endl;
    cout<<"The value of logical operator (a==b)||(a<b) is "<<((a==b) || (a<b))<<endl;
    cout<<"The value of logical operator (!(a==b)) is "<<(!(a==b))<<endl;
    return 0;
}




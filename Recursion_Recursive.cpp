#include<iostream>

using namespace std;
            // ********** Factorial of a number***********
// int factorial(int n){
//     if (n==1)
//     {
//         return 1;
//     }
//     else if (n<1){
//         return 1;
//     }
//     return n*factorial(n-1);
// }
// int main(){
//     int a;
//     cout<<"Enter your desired number"<<endl;
//     cin>>a;
//     cout<<"the factorial of a is "<<factorial(a)<<endl;
//     return 0;
// }

            // **************** Fibonacci Numbers ***********
int fib(int n){
    // if (n==0){
    //     return 0 ;
    // }
    // else if (n==1){
    //     return 1;
    // }
    if (n<2){
        return 1;
    }
    else {return fib(n-2) + fib(n-1);
    }
}
int main(){
    int a;
    cout<<"Enter the number "<< endl;
    cin>>a;
    cout<<"The term in fibonacci sequence at position "<<a<<" is "<<fib(a)<<endl;
    return 0;
}
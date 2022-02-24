#include<iostream>

using namespace std;

int main(){
    /****Loop in c++***
    1. For loop
    2. While loop
    3. Do-While loop */

//// Syntax for for loop
// for (initialization; conduction; updation)
// {
//     loop body(c++ code);
// }

//     int i,p ; 
//     cin>>p;
//     for (int i = 0; i < p; i++)
//     {
//         /* code */
//         cout<<i<<endl;
//         // i++;
//     }        
//     return 0;
// }

// infinite loop 
// int main(){
//     for (int i = 1; 25 <= 40;i++) // this condition is always true
//     {
//         cout<<i<<endl;
//     }
//     return 0;

//***********While loop ***********
//While (condition)
//{
//     c++ statements;
// }
    // int i,p;
    // cin>>i>>p;
    // while(i<=p){
    //     cout<<i<<endl;
    //     i++;
    // }

////*********Do While loop ***********
    // int i=1;
    // do
    // {
    //     cout<<i<<endl;
    //     i++;
    // } while (i<=10);
    
    //// Multiplication table of number entered by user using loop
    int i=1;
    int p;
    cin>>p;
    do
    {
        cout<<p*i<<endl;
        i++;
    } while (i<=10);
    
    return 0;
}
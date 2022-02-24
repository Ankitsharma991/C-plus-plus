            //********** Inline Function***********
// #include<iostream>

// using namespace std;

// inline int product(int a, int b){
//     // Not recommended to use below lines with inline function 
//     // static int c=0;  // this value executes only once
//     // c=c+1;         // Next time this function is run, the value of c will be retained 
//     return a*b ;
// }
// int main(){
//     int a, b ;
//     cout<<"Enter the value of a and b"<<endl;
//     cin>>a>>b;
//     cout<<"The product of a and b is "<<(a*b)<<endl;
//     cout<<"The product of a and b is "<<product(a, b)<<endl;
//     cout<<"The product of a and b is "<<product(a, b)<<endl;
//     // cout<<"The product of a and b is "<<product(a, b)<<endl;
//     // cout<<"The product of a and b is "<<product(a, b)<<endl;
//     // cout<<"The product of a and b is "<<product(a, b)<<endl;
//     // cout<<"The product of a and b is "<<product(a, b)<<endl;
//     // cout<<"The product of a and b is "<<product(a, b)<<endl;
//     // cout<<"The product of a and b is "<<product(a, b)<<endl;
//      return 0;
// }

                //******** Default Arguments **************

// #include<iostream>

// using namespace std;

// float moneyReceived(int currentMoney, float factor=1.04){           // factor value is default value Here
//     return currentMoney*factor;
// }

// int main(){
//     int a, b;
//     cout<<"Enter the value of a and b: "<<endl;
//     cin>>a>>b;
//     int money=100000;
//     cout<<"if you have "<<money<<" rs in your bank account, you will receive "<<moneyReceived(money)<<"rs after one year "<<endl;
//     cout<<"for VIP : if you have "<<money<<" rs in your bank account, you will receive "<<moneyReceived(money, 1.10)<<"rs after one year "<<endl;
//     return 0;
// }


            // *********Constant Arguments***********
#include<iostream>

using namespace std;

// int strlen(const char *p){  // nothing will be changed after using constant in any arguments

// }
int main(){

    return 0;
}
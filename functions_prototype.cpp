#include <iostream>

using namespace std;

// Function prototype
// syntax
// type function-name (arguments);
// int sum(int a, b) //----> not acceptable
// int sum(int a, int b) //---> Acceptable

//*********** First method ****************
// int sum(int a, int b);
// int main()
// {
//     int num1, num2;
//     cout << "Enter first number" << endl;
//     cin >> num1, num2;
//     // num1 and num2 are actual parameters
//     cout << "Enter second number" << endl;
//     cin >> num2;
//     cout << "The sum is " << sum(num1, num2) << endl;
//     return 0;
// }
// int sum(int a, int b)
// {
//     // formal parameters a and b will be taking values from actual parameters num1 and num2
//     int c = a + b;
//     return c;
// }

// ******** Second method ************
void g(void);
int sum(int a, int b){
    // formal parameters a and b will be taking values from actual parameters num1 and num2
    int c = a + b;
    return c;
}
int main()
{
    int num1, num2;
    cout << "Enter first number" << endl;
    cin >> num1, num2;
    // num1 and num2 are actual parameters
    cout << "Enter second number" << endl;
    cin >> num2;
    cout << "The sum is " << sum(num1, num2) << endl;
    g();
    return 0;
}
void g(void){
    cout<<"Hello, good morning!"<<endl;
}
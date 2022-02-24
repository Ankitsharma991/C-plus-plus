#include <iostream>

/*

***********Syntax For Initialization List in constructor **********
constructor (argument-list) : initialization-section 
{
    assignment + other code; // cody of the constructor
}
*/

using namespace std;

class Test
{
    int a;
    int b;

public:
    // Test(int i, int j) : a(i), b(j)-->works
    // Test(int i, int j) : a(i), b(j+i)-->Works
    // Test(int i, int j) : a(i), b(j*2)--Works
    // Test(int i, int j) : a(i), b(j+a)--Works
    // Test(int i, int j) : b(j), a(i+b) --> Gives garbage value because of change in order and initialization happens according to declaration and since a is declared first than b . so to initialize this test we need to declare b first then a
    // Test(int i, int j) : a(i)
    Test(int i, int j) : a(i), b(j)
    {
        // int a;
        // int b;
        // b = j; // We can also add constructor inside the body
        cout << "Constructor executed" << endl;
        cout << "The value of a is " << a << endl;
        cout << "The value of b is " << b << endl;
    }
};

int main()
{
    int p, q;
    cout << "Enter the value of p and q" << endl;
    cin >> p >> q;
    Test t(p, q + 2);

    return 0;
}
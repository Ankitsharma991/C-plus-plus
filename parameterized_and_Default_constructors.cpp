#include <iostream>

using namespace std;
class complex
{
    int a, b;

public:
    complex(int, int);
    void printNumber()
    {
        cout << "Your number is " << a << " + " << b << "i" << endl;
    }
};
complex :: complex(int p, int q){  // this is a parametrized constructor as it takes 2 parameters
    // int p, q;
    // cin>>p>>q;
    a = p ;
    b = q ;
}
int main()
{
    //implicit call
    complex a(4, 6);
    a.printNumber();
    //Explict call
    complex b = complex(5, 8);
    b.printNumber();
    return 0;
}
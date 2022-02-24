/* ***********                  ------ Exercise on Inheritace ------            *********
Create 2 classes: 
    1.Simple Calculator- Takes input of 2 numbers using a utility function and performs +,-,*,/ and display the result using another function
    2.Scientific Calculator - Takes input of 2 numbers using a utility function function and performs any four scientific operations of your choice and display the result using another function

    create another class HybridCalculator and inherit it using these 2 classes : 
    Q1. What type of the inheritance are you using ?? ----> Multiple Inheritance
    Q2. Which mode of inheritance are you using ??------> Both publically
    Q3. create an object of myCalculator and display results of simple and scientific calculator .--->
    Q4. How is code reusability implemented ? ---->
*/

#include<iostream>
#include<cmath>

using namespace std;

class simpleCalculator {
    int a, b;
    public : 
        void getDataSimple(){
            cout << "Enter the value of a" << endl ;
            cin >> a ; 
            cout << "Enter the value of b" <<  endl ;
            cin >> b;
        }

        void performOperationSimple(){
            cout << "The value of a+b is " << a + b << endl;
            cout << "The value of a-b is " << a - b << endl;
            cout << "The value of a*b is " << a * b << endl;
            cout << "The value of a/b is " << a / b << endl;
        }
};

class scientificCalculator {
    int c, d;
    public : 
        void getDataScientific(){
            cout << "Enter the value of c" << endl ;
            cin >> c ; 
            cout << "Enter the value of d" <<  endl ;
            cin >> d;
        }

        void performOperationScientific(){
            cout << "The value of cos(c) and cos(d) is " << cos(c) << " , "<< cos(d) << endl;
            cout << "The value of sin(c) and sin(d) is " << sin(c) << " , "<< sin(d) << endl;
            cout << "The value of exp(c) and exp(d) is " << exp(c) << " , "<< exp(d) << endl;
            cout << "The value of tan(c) and tan(d) is " << tan(c) + tan(d) << endl;
        }
};

class HybridCalculator : public simpleCalculator, public scientificCalculator{

};

int main(){
    // simpleCalculator calc;
    // calc.getDataSimple();
    // calc.performOperationSimple();

    // scientificCalculator cal;
    // cal.getDataScientific();
    // cal.performOperationScientific();

    HybridCalculator ca;
    ca.getDataSimple();
    ca.getDataScientific();
    ca.performOperationSimple();
    ca.performOperationScientific();

    return 0;
}
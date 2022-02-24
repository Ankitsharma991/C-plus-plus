#include<iostream>

using namespace std;
class Base{
    protected:
        int a;
    private:
        int b;

};
/*for a protected members :
                        public derivation         Private derivation :      protected derivation
1.private members :      Not inheritant               Not Inheritant            Not Inheritant
2.protected members :       protected                   private                   protected
3.public members :          public                      private                   protected
*/
class Derived : protected Base{

};
int main(){
    Base b;
    Derived d;
    // cout<<b.a;   // Will not work since a is declared as protected in both base as well as derived class 
    return 0;
}
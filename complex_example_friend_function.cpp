#include<iostream>

using namespace std;
class c2;

class c1{
    int val1;
    friend void exchange(c1 & , c1 &);
    public:
        void indata(int a){
            val1 = a;
        }
        void display(void){
            cout<<val1<<endl;
        }
};

class c2{
    int val2;
    friend void exchange(c1 & , c1 &);
    public:
        void indata(int a){
            val2 = a;
        }
        void display(void){
            cout<<val2<<endl;
        }
};
/*
trick to swap 2 numbers:
temp = a;
a = b ;
b = temp;
*/
void exchange(c1 & x, c2 & y){
    int tmp = x.val1;
    x.val1 = y.val2;
    y.val2 = tmp;
}
int main(){
    // int p, q;
    // cin>>p>>q;
    c1 oc1;
    c2 oc2 ;

    oc1.indata(5);
    oc2.indata(7);
    exchange(oc1, oc2);

    cout<<"The value of C1 after exchange becomes : ";
    oc1.display();

    cout<<"The value of C2 after exchange becomes : ";
    oc2.display();
    
    return 0;
}
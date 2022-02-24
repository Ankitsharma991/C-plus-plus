#include<iostream>

using namespace std;

template <class T1=int, class T2=float, class T3=char>
class Ankit{
    public:
        T1 a;
        T2 b;
        T3 c;
        Ankit(T1 x, T2 y, T3 z){
            a = x;
            b = y;
            c = z;
        }
        void display(){
            cout<<"The value of a is "<<a<<endl;
            cout<<"The value of b is "<<b<<endl;
            cout<<"The value of char c is "<<c<<endl;
        }

};

int main(){
    int p;
    float q;
    char r;
    cout<<"Enter an integer value(p), a float(q) and a character(r): "<<endl;
    cin>>p>>q>>r;
    Ankit<> A(p, q, r);
    A.display();
    cout<<"--------------------------------------"<<endl;
    Ankit<float, char, char> n(4.5, 'm', 'p');
    n.display();

    return 0;
}
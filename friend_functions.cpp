#include<iostream>

using namespace std;
class complex{
    int a, b;
    public: 
        void setNumber(int n1, int n2){
            a = n1;
            b = n2;
        }
        // below line means that sumcomplex function is allowed to do anything with the private members  of the code 
        friend complex sumcomplex(complex o1, complex o2);
        void printNumber(){
            cout<<"Your number is "<<a<<" + "<<b<<"i"<<endl;
        }
};
complex sumcomplex(complex o1, complex o2){
    complex o3;
    o3.setNumber((o1.a + o2.a), (o1.b + o2.b));
    return o3;
}
int main(){
    int p, q, r, s;
    cin>>p>>q>>r>>s;
    complex c1, c2, sum;
    c1.setNumber(p, q);
    c1.printNumber();

    c2.setNumber(r, s);
    c2.printNumber();

    sum = sumcomplex(c1, c2);
    sum.printNumber();

    return 0;
}

// properties of friend function 
/*
1. Not in the scope of class 
2. since it is not in the scope of the class , it cannot be called from the object of that class . c.sumcomplex() == invalid 
3. can be invoked without the help of any objects
4. usually contains the as objects arguments
5. can be declared inside public or private section of the class 
6. it cannot access the members directly by their names and need object_name.member_name to access any member.
*/
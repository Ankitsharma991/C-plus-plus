#include<iostream>

using namespace std;
class complex{
    int real, imaginary;
    
    public :
        void getData(){
            cout<<"The real part is "<<real<<endl;
            cout<<"The imaginary part is "<<imaginary<<endl;
        } 

        void setData(int a, int b){
            real = a;
            imaginary =b;
        }
};

int main(){
    int p, q;
    cout<<"Enter the value of p and q : "<<endl;
    cin>>p>>q;
    complex c1;
    // complex *ptr = &c1;
    complex *ptr = new complex;

    // (*ptr).setData(p, q);
    // (*ptr).getData();

    // (&c1).setData(p, q);
    // (&c1).getData();

    cout<<"---------------------------------Row operator---------------------------------"<<endl;
    (ptr)->setData(p, q); // row operator basically show the reference of the function
    // (*ptr).getData(); is as good as
    ptr->getData();

    cout<<"--------------------------------Array of object---------------------------------"<<endl;
    complex *ptr1 = new complex[4];
    ptr1->setData(p, q);
    ptr1->getData();
    return 0;
}
#include<iostream>

using namespace std;

class Base{
int data1; //Private by default and it's not inheritable
public:
    int data2;
    void setData();
    int getData1();
    int getData2(); 
};

void Base :: setData(void){
    data1 = 10 ; 
    data2 = 20;
};

int Base :: getData1(){
    return data1 ;
};

int Base :: getData2(){
    return data2 ;
};

class derive : public Base{         // class is being derived publically 
    int data3;
    public : 
        void process();
        void display();

};

void derive :: process(){
    data3 = data2 * getData1() ;
};

void derive :: display(){
    cout<<"Value of data 1 is "<<getData1()<<endl; // private isn't inheritant so data1 is called as a function
    cout<<"Value of data 2 is "<<data2<<endl;
    cout<<"Value of data 3 is "<<data3<<endl;
};
int main(){
    derive der;
    der.setData();
    der.process();
    der.display();
    return 0;
}
#include<iostream>

using namespace std;
class simple{
    int data1;
    int data2;
    int data3;
    public :     
        simple(int a, int b=19, int c=8){
            data1 = a;
            data2 = b;
            data3 = c;
        }
        void printData();
};
void simple :: printData(){
    cout<<"The value of data are "<<data1<<", "<<data2<<" and "<<data3<<endl;
};
int main(){
    // int p, q;
    // cin>>p>>q;
    simple s(21);
    s.printData();
    return 0;
}
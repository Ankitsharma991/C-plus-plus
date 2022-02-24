#include<iostream>

using namespace std;
// CLASS TEMPLATES WITH MULTIPLE PARAMETERS(ONE, TWO, OR MORE THAN TWO)
/*  Syntax
template<class T1, class T2, .........>(COMMA SEPARATED)
class nameOfClass{
    // body
}
*/

template<class T1, class T2>
class myClass{
    public: 
        T1 data1;
        T2 data2;
        myClass(T1 a, T2 b){
            data1 = a;
            data2 = b;
        }

        void display(){
            cout<<this->data1<<this->data2<<endl;
        }
};

int main(){
    int p;
    string q;
    cout<<"Enter one integer and a string of your choice : "<<endl;
    cin>>p;
    cin>>q;
    myClass<int, string> obj(p, q);
    obj.display();

    return 0;
}
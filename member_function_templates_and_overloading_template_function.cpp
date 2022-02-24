#include<iostream>

using namespace std;

template<class T>
class Ankit{
    public:
        T data;
    Ankit(T a){
        data = a;
    }
    void display();
};
template <class T>
void Ankit<T>:: display(){
        cout<<data<<endl;
        }


void func(int a){
    cout<<"I am first func()"<<a<<endl;
}

template <class T>
void func1(T a){
    cout<<"I am templatized func(): "<<a<<endl;
}

template <class T>
void func1(int a){
    cout<<"I am templatized func(): "<<a<<endl;
}

int main(){
    // Ankit<float> A(5.02);
    // Ankit<char> A('A');
    // Ankit<string> A('Ankit');
    // cout<<A.data<<endl;
    // A.display();

    func(4);    // Exact match takes the higher priority
    func1(4);
    
    return 0;
}
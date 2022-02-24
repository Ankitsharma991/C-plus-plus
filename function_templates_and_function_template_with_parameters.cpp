#include<iostream>

using namespace std;

// float funcAverage(int a, int b){
//     float avg = (a+b)/2;
//     return avg;
// }

// float funcAverage2(int a, float b){
//     float avg = (a+b)/2;
//     return avg;
// }
template <class T>
void swapp(T &a, T &b){
    T temp = a;
    a = b;
    b = temp;
}

template <class T1, class T2>
float funcAverage2(T1 a, T2 b){
    float avg = (a+b)/2;
    return avg;
}

int main(){
    float a ;
    a = funcAverage2(22, 1.22);
    printf("The average of these numbers is %.2f\n ", a);
    // cout<<"The average of these numbers is "<<a<<endl;

    int x=5, y=15;
    swapp(x, y);
    cout<<x<<endl;
    cout<<y<<endl;

    return 0;
}
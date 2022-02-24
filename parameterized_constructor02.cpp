#include<iostream>

using namespace std;
class point{
    int x, y;
    public:  
        point(int a, int b){
            x = a ;
            y = b ;
        }
        void displaypoint(){
            cout<<"The point is ("<<x<<", "<<y<<")"<<endl;
        }

};

// create a function (Hint: make it a friend function) which takes 2 point objects and computes the distance between those two points

int main(){
    // int t;
    // t=(5, 7);
    point p(8, 1);
    p.displaypoint();

    point q(4, 8);
    q.displaypoint();
    return 0;
}
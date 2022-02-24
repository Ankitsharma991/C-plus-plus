// create a function (Hint: make it a friend function) which takes 2 point objects and computes the distance between those two points

#include<iostream>

using namespace std;
void distancePoint(Point obj1, Point obj2){
    double dis; 
    dis = sqrt(pow((obj2.x-obj1.x),2)+pow((obj2.y-obj1.y),2));
    cout<<dis<<endl;
};

int main(){
    Point p(1,1);
    p.displayPoint();

    Point q(4, 6);
    q.displayPoint();

    distancePoint(p, q);
    return 0;
}
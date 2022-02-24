// #include<iostream>

// using namespace std;
// int sum(char a, int b){
//     cout<<"Using function with two arguments"<<endl;
//     return a+b;
// }
// int sum(int a, int b, int c){
//     cout<<"Using function with three arguments"<<endl;
//     return a+b-c;
// }
// int main(){
//     int  b, c ;
//     char a;
//     cout<<"Enter the numbers and char : "<<endl;
//     cin>>a;
//     cin>>b>>c;
//     cout<<"The sum of a b and c is "<<sum(a, b)<<endl;
//     cout<<"The sum of a b and c is "<<sum(a, b, c)<<endl;
//     return 0;
// }


                // overloaded function to calculate the volume of a cylinder 
#include<iostream>

using namespace std;
int volume(double r, int h){
    return (3.14 * r * h);
}
int main(){
    double t ;
    int d;
    cin>>t>>d;
    cout<<volume(t, d)<<endl;
    return 0;
}
#include<iostream>

using namespace std;

typedef struct employee
{
    // int eId ;
    // char favChar ;
    // float salary;
}ep;  // by using type def we can write ep instead of struct employee Here

// int main(){
//     ep Ankit;
//     struct employee Neeraj;
//     struct employee Garima;
//     struct employee Harry;
//     Ankit.eId = 1;
//     Ankit.favChar = 'G';
//     Ankit.salary = 1200000;
//     cout<<Ankit.eId<<"\n"<<Ankit.favChar<<"\n"<<Ankit.salary<<endl;
//     // cout<<Harry.eId<<"\n"<<Harry.favChar<<"\n"<<Harry.salary<<endl;
union money
{
    int rice ;
    char car ;
    float pounds ;
} ;

// int main(){
//     enum meal{Breakfast, lunch, dinner};
//     meal m1=Breakfast;
//     cout<<Breakfast<<endl;
//     cout<<m1<<endl;
//     cout<<lunch<<endl;
//     cout<<dinner<<endl;
//     ep Ankit;
//     union money m1;
//     m1.rice=34;
//     m1.car='c';
//     cout<<m1.car<<endl;
//     struct employee Neeraj;
//     struct employee Garima;
//     struct employee Harry;
//     Ankit.eId = 1;
//     Ankit.favChar = 'G';
//     Ankit.salary = 1200000;
//     cout<<Ankit.eId<<"\n"<<Ankit.favChar<<"\n"<<Ankit.salary<<endl;
   
    return 0;
}

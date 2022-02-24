#include<iostream>

using namespace std;
// ***********// Sequence structure : *************
//************** // program to check  whetherthe given number is odd or even**************
// int main(){
//     int i ; 
//     cin >>i ; 
//     if (i%2==0){
//         cout<<"The number is even"<<endl;
//     }
//     else {
//         cout<<"The number is odd"<<endl;
//     }
//     return 0;

// }


//*************** // program to check whether a person is eligible to cast vote or not **********
// int main(){
//     // cout<<"This is tutorial 9"<<endl;
//     int age ;
//     cout<<"Tell me your age"<<endl;
//     cin>>age ;
//     if (age<18){
//         cout<<"You cannot cast vote"<<endl;
//     }
//     else if (age==18){
//         cout<<"You are eligible to make your voter card \n\t\t\t\t to cast vote"<<endl;
//     }
//     else {
//         cout<<"You can cast vote"<<endl;
//     }

//     return 0;
// }

//**********Switch Case Structure************

int main(){
    int age;
    cout<<"Tell me your age"<<endl;
    cin>>age ;
    switch (age)
    {
    case 18:
        /* code */
        cout<<"You are 18"<<endl;
        break;
    case 2:
        cout<<"You are 2"<<endl;
        break;
    case 22:
        cout<<"You are 22"<<endl;
        break;
    default:
        cout<<"No special cases"<<endl;
        break;
    }
    cout<<"Done with switch case"<<endl;
    return 0;
}
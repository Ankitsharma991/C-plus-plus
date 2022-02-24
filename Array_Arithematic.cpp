#include<iostream>

using namespace std;

int main(){
    int marks[] = {23, 25, 45, 72};
    // cout<<marks[0]<<endl;
    // cout<<marks[1]<<endl;
    // cout<<marks[2]<<endl;
    // marks[3] = 455; // You can change the value of an array
    // cout<<marks[3]<<endl;

// using foe loop

    // for (int i = 0; i < 4; i++)
    // {
    //     cout<<"The value of marks "<<i<<" is "<<marks[i]<<endl;
      
    // }

// using While loop 

// int i = 0;
//     while (i<4)
//     {
//         cout<<"The value of marks "<<i<<" is "<<marks[i]<<endl;
//         i++;
        
//     }
    

// using do while Loop
//     int i=0;
//     do
//     {
//         cout<<"The value of marks "<<i<<" is "<<marks[i]<<endl;
//         i++;
//     } while (i<4);
        

//     return 0;

//******* Pointers in Arithematic Arrays ********************************
    int*p = marks;
    cout<<*p<<endl;
    cout<<*(p++)<<endl;
    cout<<*++p<<endl;
    // cout<<"The value of *p is "<<*p<<endl;
    // cout<<"The value of *(p+1) is "<<*(p+1)<<endl;
    // cout<<"The value of *(p+2) is "<<*(p+2)<<endl;
    // cout<<"The value of *(p+3) is "<<*(p+3)<<endl;

return 0;
}
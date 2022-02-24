#include<iostream>

using namespace std;

int main(){
    // for (int i = 0; i < 4; i++)
    // {
    //     cout<<i<<endl;
    //     if (i==2){
    //         break;
    //     }
    // }
    for (int i = 0; i < 15; i++)
    {
        if (i==10){
            continue;
        }
        cout<<i<<endl;
    }
    return 0;
}
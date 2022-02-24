#include<iostream>

using namespace std;
// Destroctor neither takes an arguement nor returns the values
int count = 0;
class num{
    public:
        num(){          // this is the constructor
            count++;
            cout<<"This is the time when constructor is called for object"<<count<<endl;
        }
        ~num(){             // this is Destructor
            cout<<"This is the time when my destructor is called for object number"<<count<<endl;
        }
};
int main(){
    cout<<"We are inside our main function"<<endl;
    cout<<"Creating first object n1"<<endl;
    num n1;
    {
        cout<<"Entering this block"<<endl;
        cout<<"Creating two more objects"<<endl;
        num n2,n3;
        cout<<"Existing this block";
    }
    cout<<"Back to main"<<endl;
    return 0;
}
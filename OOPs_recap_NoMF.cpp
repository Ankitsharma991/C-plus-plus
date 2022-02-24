#include <iostream>
#include <string>
using namespace std;
class binary
{
    string s;

public:
    void read(void);
    void chk_bin(void);
    void ones(void);
    void display(void);
};

void binary::read(void)
{
    cout << "Enter a binary number" << endl;
    cin >> s;
}
void binary ::chk_bin(void)
{
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) != '0' && s.at(i) != '1')
        {
            cout << "Incorrect Binary Format" << endl;
            exit(0);
        }
        
    }
}
void binary ::ones(void)
{
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) == '0')
        {
            s.at(i) == '1';
        }
        else
        {
            s.at(i) == '0';
        }
    }
}
void binary :: display(void)
{
    cout<<"Displaying your binary number"<<endl;
    for (int i=0 ; i < s.length();i++){
        cout<<s.at(i);
    }
    cout<<endl;
}
    int main()
    {

        binary b;
        b.read();
        b.chk_bin();
        b.display();
        b.ones();
        b.display();

        return 0;
    }



            //opps classes and objects

        //c++ --> intially called ---> c with classes by stroustroup
        ///class---> extension of structures (in C)
        // structures had limitations
        // --> members are public
        // --->>No methods
        // classes = structure + more
        // classes--> can have methods and property
        // classes--> can make few members as private and few as public
        // structures in c++ are typedefed
        // you can declare objects along with the class decoration
        // class Employee{
        // class Definition
        // }Ankit, rohan, lovish;
        // Ankit.salary = 8 makes no sense if salary is private

        // Nesting of member function
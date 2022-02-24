#include<iostream>
#include<fstream>

using namespace std;

int main(){
    ofstream out;
    out.open("sample.txt");
    out<<"This is me\n";
    out<<"This is me also\n";
    out<<"This is also me";
    out.close();

    ifstream in;
    string st, st2;
    in.open("sample.txt");
    // in>>st>>st2;
    // cout<<st<<" "<<st2<<endl;

    while(in.eof()==0){
        getline(in, st);
        cout<<st<<endl;
    }
    in.close();

    return 0;
}
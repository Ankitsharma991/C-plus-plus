#include<iostream>
#include<map>
#include<string>

// Map is an associative array

using namespace std;

int main(){
    map<string, int> marksMap;
    marksMap["Ankit"] = 98;
    marksMap["Jack"] = 2;
    marksMap["Harry"] = 59;
    marksMap.insert({{"Kozume", 169}, {"Kuroo", 124}});
    map<string, int> :: iterator iter;
    for(iter = marksMap.begin(); iter != marksMap.end(); iter++){
        cout<<(*iter).first<<" "<<(*iter).second<<endl;
    }

    cout<<"The Size is: "<<marksMap.size()<<endl;
    cout<<"The max size is: "<<marksMap.max_size()<<endl;
    cout<<"The empty return value is: "<<marksMap.empty()<<endl;
    return 0;
}
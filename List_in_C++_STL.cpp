#include <iostream>
#include <list>

using namespace std;

void display(list<int> &lst){
    list<int> :: iterator it;
    for (it = lst.begin(); it != lst.end(); it++)
    {
        cout<<*it<<endl;
    }
    
}

int main()
{
    list<int> list1; // list of size 0


    list1.push_back(5);
    list1.push_back(7);
    list1.push_back(1);
    list1.push_back(9);
    list1.push_back(15);
    list1.pop_back();
    list1.pop_front();
    list1.remove(9);    // it there are multiple same values then it will remove all those numbers 
    list1.sort();

    // list<int>::iterator iter;
    display(list1);

    // iter = list1.begin();
    // cout << *iter << endl;
    // iter++;
    // cout << *iter << endl;
    // ++iter;
    // cout << *iter << endl;
    // iter++;
    // cout << *iter << endl;

    list<int> list2(3); // empty list of size 7
    list<int> :: iterator iter;
    iter = list2.begin();
    *iter = 45;
    iter++;
    *iter = 6;
    iter++;
    *iter = 9;
    iter++;
    // list2.sort();

    // display(list2);

    list1.merge(list2);
    cout<<"list1 after merged "<<endl;
    display(list1);
    
    list1.sort();
    cout<<"list1 in sorted order "<<endl;
    display(list1);

    list1.reverse();
    cout<<"list1 in reversed order "<<endl;
    display(list1);




    return 0;
}
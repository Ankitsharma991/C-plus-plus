#include <iostream>
#include <vector>
using namespace std;

template <class T>
void display(vector<T> &v)
{
    cout<<"Displaying this vector"<<endl;
    for (int i = 0; i < v.size(); i++)
    {
        cout<<v[i]<<" ";
        // cout<<v.at(i)<<" ";
    }
    cout<<endl;
}

int main()
{
    // way to create a vector
    vector<int> vec1;   // zero length integer vector
    vector<char> vec2(4); //4-element character vector
    vector<char> vec3(vec2); //4-element character vector from vec2
    vector<int> v(3, 13);  //6-elememt vectors of 3s

    // display(vec1);
    // vec2.push_back('5');
    // display(vec2);
    // display(vec3);
    display(v);
    cout<<v.size()<<endl;

    int element, size, p;
    // cout<<"Enter the size of the vector"<<endl;
    // cin>>size;
    // for (int i = 0; i < size; i++)
    // {
    //     cout << "Enter an element to add to this vector" << endl;
    //     cin >> element;
    //     vec1.push_back(element);
    // }

    // display(vec1);
    // cout<<"Enter your desired left value"<<endl;
    // cin>>p;
    // vector<int> :: iterator iter = vec1.begin();
    // // vec1.pop_back();
    // // vec1.insert(iter+1,5,p);4

    // display(vec1);

    return 0;
}
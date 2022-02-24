#include<iostream>
#include<functional>
#include<algorithm>

using namespace std;

int main(){
    // Function Objects (Functor) : Function wrapped in a class so that it available like an object
    int arr[] = {1, 3, 4, 12, 54, 7};
    // sort(arr, arr+6);
    sort(arr, arr+6, greater<int>());
    for (int i = 0; i < 6; i++)
    {
        cout<<arr[i]<<endl;
    }

    return 0;
}
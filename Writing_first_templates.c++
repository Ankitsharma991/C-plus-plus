#include <iostream>

using namespace std;

template <class T>
class vector
{
    public:
        T * arr;
        // int * arr;
        int size;

        vector(int m)
        {
            size = m;
            // arr = new int[size];
            arr = new T[size];
        }
        // int dotProduct(vector &v)
        T dotProduct(vector &v)
        {
            // int d = 0;
            T d = 0;
            for (int i = 0; i < size; i++)
            {
                d += this->arr[i] * v.arr[i];
            }
            return d;
        }
};

int main()
{
    // // for integer input
    // vector v1(3);
    // v1.arr[0] = 5;
    // v1.arr[1] = 21;
    // v1.arr[2] = 10;

    // vector v2(3);
    // v2.arr[0] = 15;
    // v2.arr[1] = 12;
    // v2.arr[2] = 1;

    // int a = v1.dotProduct(v2);
    // cout << a << endl;


    // for float input
    vector<float> v1(3);
    v1.arr[0] = 5.0;
    v1.arr[1] = 21.2;
    v1.arr[2] = 10.1;

    vector<float> v2(3);
    v2.arr[0] = 15.5;
    v2.arr[1] = 12.14;
    v2.arr[2] = 1.01;

    int a = v1.dotProduct(v2);
    cout << a << endl;
    return 0;
}
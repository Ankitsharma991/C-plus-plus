#include <iostream>

using namespace std;
class Employee
{
    int id;
    static int count;

public:
    void setData(void)
    {
        cout << "Enter id" << endl;
        cin >> id;
        count++;
        count++;
        count++;
        count++;
        count++;
        count++;
        count++;
        count++;
    }
    void getData(void)
    {
        cout << "The id of this employee is " << id << " and this is employee number is " << count << endl;
    }
    static void getcount(void)
    {
        cout << "The value of count is " << count << endl;
    }
};
int Employee ::count = 10; // Default value is 0
int main()
{
    Employee Ankit, Harry, lovish;
    // Ankit.id = 1
    // Ankit.count=1 // cannot do this id and count are private
    Ankit.setData();
    Ankit.getData();
    Employee::getcount();

    Harry.setData();
    Harry.getData();
    Employee::getcount();

    lovish.setData();
    lovish.getData();
    Employee::getcount();
   
    return 0;
}
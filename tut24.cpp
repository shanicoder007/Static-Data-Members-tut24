#include <iostream>
using namespace std;
class Employee
{

    int Id;
    static int count;

public:
    void setData(void)
    {
        cout << "Enter the Id " << endl;
        cin >> Id;
        count++;
    }
    void getData(void)
    {

        cout << "The Id of this  employee  is:   " << Id << "  and this is employee numbers " << count << endl;
    }
    static void getcount()
    {

        cout << "Enter the value of this count is:  " << count << endl;
    }
};

int Employee ::count = 500;

int main()
{

    Employee aslam, zeeshan, ali;
    // aslam.Id = 4;
    // aslam.count = 6;
    // we cannot do this because id and count is private

    aslam.setData();
    aslam.getData();
    Employee::getcount();

    zeeshan.setData();
    zeeshan.getData();
    Employee::getcount();

    ali.setData();
    ali.getData();
    Employee::getcount();
    return 0;
}
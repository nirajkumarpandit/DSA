#include <iostream>
using namespace std;
int main()
{

    int age;
    cout << "Enter the age :" << endl;
    cin >> age;
    if (age >= 18)
    {
        cout << "you con drive";
    }
    else
    {
        cout << "you can not drive";
    }
    return 0;
}
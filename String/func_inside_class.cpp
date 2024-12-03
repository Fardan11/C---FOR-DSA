#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    string name;
    int roll;
    Student(string name, int roll)
    {
        this->name = name;
        this->roll = roll;
    }
    void greet()
    {
        cout << "Hello from " << name << endl;
    }
};

int main()

{
    Student fardan("Fardan", 24);
    fardan.greet();
    Student nadim("Nadim", 24);
    nadim.greet();

    return 0;
}
#include <bits/stdc++.h>
using namespace std;

class Cricketer
{
public:
    string country;
    int jersey;
    Cricketer(string country, int jersey)
    {
        this->country = country;
        this->jersey = jersey;
    }
};
int main()

{
    Cricketer *dhoni = new Cricketer("Dhoni", 100);
    cout << dhoni->jersey << endl;

    return 0;
}
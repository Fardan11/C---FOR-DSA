#include <iostream>
using namespace std;

int main()
{
    int N;
    cin >> N;

    // for creating the top
    //
    /*
    \    /
     \  /

    \ -- space -- /

    N - 2 * (i + 1) = 5-2(0+1)
    5/2=2.5=2= i=0,1);

    */

    for (int i = 0; i < N / 2; i++)
    {
        // inner loop
        for (int j = 0; j < i; j++)
        {
            cout << " ";
        }

        cout << "\\";

        // space between
        for (int j = 0; j < N - 2 * (i + 1); j++)
        {
            cout << " ";
        }

        cout << "/" << endl;
    }

    // middle
    for (int i = 0; i < N / 2; i++)
    {
        cout << " ";
    }
    cout << "X" << endl;

    // opposite of top
    for (int i = N / 2 - 1; i >= 0; i--)
    {
        for (int j = 0; j < i; j++)
        {
            cout << " ";
        }
        cout << "/";

        // space between
        for (int j = 0; j < N - 2 * (i + 1); j++)
        {
            cout << " ";
        }
        cout << "\\" << endl;
    }

    return 0;
}

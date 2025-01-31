#include <iostream>
#include <list>
using namespace std;

void print(list<int>& DL) {
    cout << "L -> ";
    for (auto it = DL.begin(); it != DL.end(); ++it) {
        cout << *it << " ";
    }
    cout << endl;

    cout << "R -> ";
    for (auto it = DL.rbegin(); it != DL.rend(); ++it) {
        cout << *it << " ";
    }
    cout << endl;
}

int main() {
    int Q;
    cin >> Q;

    list<int> DL;
    while (Q--) {
        int X, V;
        cin >> X >> V;
        if (X == 0) {
            DL.push_front(V);
        } else if (X == 1) {
            DL.push_back(V);
        } else if (X == 2) {
            if (V >= 0 && V < DL.size()) {
                auto it = DL.begin();
                advance(it, V);
                DL.erase(it);
            }
        }

        print(DL);
    }

    return 0;
}

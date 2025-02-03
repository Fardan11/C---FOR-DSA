#include <bits/stdc++.h>
using namespace std;

void FreqWord(string &sen)
{
    map<string, int> wordCount;
    string word;
    stringstream ss(sen);
    string mostFrequent;
    int maxCount = 0;

    while (ss >> word)
    {
        wordCount[word]++;
        if (wordCount[word] > maxCount)
        {
            maxCount = wordCount[word];
            mostFrequent = word;
        }
    }

    cout << mostFrequent << " " << maxCount << endl;
}
int main()
{
    int T;
    cin >> T;
    cin.ignore();

    for (int i = 0; i < T; ++i)
    {
        string S;
        getline(cin, S);
        FreqWord(S);
    }

    return 0;
}

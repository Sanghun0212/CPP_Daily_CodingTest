// Day6_Coding_Test.cpp

// Problem 1 - frequency of each number
// integar interval --> 0 ~ 100

#include <iostream>
#include <vector>\
using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<int> freq(101, 0); // 0 ~ 100 (101 places) , initialize as 0

    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        freq[x]++;
    }

    for (int i = 0; i <= 100; i++) {
        if (freq[i] > 0) {
            cout << i << ": " << freq[i] << "\n";
        }
    }

    return 0;
}

// problem 2 - sort numbers (low to high)

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<int> a(n);

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    sort(a.begin(), a.end()); // sort numbers low to high

    for (int i = 0; i < n; i++)
    {
        cout << a[i];

        if (i < n - 1) {
            cout << " ";
        }
    }

    cout << "\n";

    return 0;

}


// problem 3 - Count words in a Sentence

#include <iostream>
#include <string>

using namespace std;

int main()
{
    string S;
    getline(cin, S);

    int count = 0;
    bool in_word = false;

    for (char c : S) {
        if (c != ' ') {
            if (!in_word) {
                count++;
                in_word = true;
            }
        }
        else {
            in_word = false;
        }
    }

    cout << count << "\n";
    return 0;
}

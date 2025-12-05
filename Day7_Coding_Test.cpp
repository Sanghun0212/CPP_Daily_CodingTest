// Day7_Coding_Test

// Problem 1 - Distinct Counting 


//1)
// #include <iostream>
// #include <climits>

// using namespace std; 

// int main() 
// {
//     int n;
//     cin >> n;

//     int past_int = INT_MIN;
//     int count = 0;

//     for (int i = 0; i < n; i++) {
//         int x;
//         cin >> x;

//         if( x != past_int ) {
//             count++;
//             past_int = x;
//         }
//     }

//     cout << count <<  "\n" ;

//     return 0;
// }

// Feedback : it is working if numbers sorted 

// 2)
#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> freq(101, 0);

    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;

        freq[x]++;
    }

    int count = 0;

    for (int i = 0; i <= 100; i++) {
        if (freq[i] > 0) {
            count++;
        }
    }

    cout << count << "\n";

    return 0;
}

// problem 2 - most frequent character

// #include <iostream>
// #include <string>
// #include <algorithm>
// using namespace std; 

// int main()
// {
//     string S;
//     cin >> S;

//     sort(S.begin(), S.end());

//     char word = S[0];

//     for(char c : S) {
//         if (c == word)
//     }
//     //....
// }

// Soulution 
// A)
#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
    string S;
    cin >> S;

    vector<int> freq(26, 0);

    for (char c : S) {
        freq[c - 'a']++;
    }

    int max_count = 0;
    char answer = 'a';

    for (int i = 0; i < 26; i++) {
        if (freq[i] > max_count) {
            max_count = freq[i];
            answer = 'a' + i;
        }
    }

    cout << answer << "\n";

    return 0;
}

// B)
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    string S;
    cin >> S;

    sort(S.begin(), S.end());

    char best_char = S[0];
    int best_count = 1;

    char current_char = S[0];
    int current_count = 1;

    for (int i = 1; i < S.size(); i++) {
        if (S[i] == current_char) {
            current_count++;
        }
        else {
            if (current_count > best_count) {
                best_count = current_count;
                best_char = current_char;
            }

            current_char = S[i];
            current_count = 1;
        }
    }

    if (current_count > best_count) {
        best_count = current_count;
        best_char = current_char;
    }

    cout << best_char << "\n";
    return 0;
}

// Problem 3 - Reverese a sentence

#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
    string S;
    getline(cin, S);

    reverse(S.begin(), S.end());

    cout << S << "\n";

    return 0;
}
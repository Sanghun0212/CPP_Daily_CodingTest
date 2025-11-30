// Day3

// 1. Sum of Digits
// #include <iostream>

// using namespace std;

// int main()
// {
//     int n;
//     cin >> n;

//     int x;
//     int sum =0;

//     for (int i = 0; i < n; i++) {


//         while(cin >> x){
//             sum += x;
//         }

//     }
//     cout << sum << "\n";
//     return 0;
// }

// Feedback
// problem said to sum all digits - use string

// Solution
#include <iostream>
#include <string>

using namespace std;

int main()
{
    string s;
    cin >> s;

    int sum = 0;
    for (char c : s) {
        sum += c - '0';   // change string to number
    }

    cout << sum << "\n";
    return 0;
}

// 2. Count Even Numbers
// #include <iostream>

// using namespace std;

// int main() 
// {
//     int n;
//     cin >> n;

//     for(int i = 0; i < n; i++) {
//         int x;
//         int count = 0;
//         while(cin >> x) {
//             if (x % 2 == 0) {
//                 count += 1;
//             }
//         }

//     }

//     return 0;
// }

// soulution
#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;

    int count = 0;

    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;

        if (x % 2 == 0) {
            count++;
        }
    }

    cout << count << "\n";

    return 0;
}

// 3. Find the Longest Word
#include <iostream>
#include <string>

using namespace std;

int main()
{
    string S;
    getline(cin, S);  // put all sentences

    string word = "";
    string longest = "";

    for (char c : S) {      // Bring each word from S
        // ex) cat dog --> "c" "a" "t" " " "d" "o" "g"
        if (c == ' ') {
            if (word.length() > longest.length()) {
                longest = word;
            }
            word = "";
        }
        else {
            word += c;
        }
    }

    if (word.length() > longest.length()) {
        longest = word;
    }

    cout << longest << "\n";
    return 0;
}

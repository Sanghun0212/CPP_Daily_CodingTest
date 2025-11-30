// Day4_Coding_Test.cpp

// 1. Count Positives, Negatives, and Zeros
// #include <iostream>

// using namespace std;

// int main()
// {
//     int n;
//     cin >> n;

//     int p_count = 0;
//     int n_count = 0;
//     int z_count = 0;

//     for(int i = 0; i < n; i++) {
//         int x;
//         cin >> x;

//         if (x > 0) {
//             p_count++;
//         } if ( x < 0) {
//             n_count++;
//         } else {
//             z_count++;
//         }
//     }

//     cout << p_count << "\n" << n_count << "\n" << z_count << "\n";

//     return 0;
// }

// Feedback
// long use of loop


// Solution
#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int p_count = 0;
    int n_count = 0;
    int z_count = 0;

    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;

        if (x > 0) {
            p_count++;
        }
        else if (x < 0) {
            n_count++;
        }
        else {
            z_count++;
        }
    }

    cout << p_count << " " << n_count << " " << z_count << "\n";

    return 0;
}

// 2. case-insensitive character count
// #include <iostream>
// #include <string>

// using namespace std;

// int main() 
// {
//     string S;
//     getline(cin, S);

//     char target;
//     cin >> target;

//     int count = 0;

//     for (char c : S) {
//         if( c == tolower(target) | c == toupper(target)) {
//             count++;
//         }
//     }

//     cout << count << "\n";

//     return 0;
// }

// Feedback
// use '||' for 'or'
// instead of using - if (c == tolower(target) || c == toupper(target))
//              use - if (tolower(c) == tolower(target))

// Solution
#include <iostream>
#include <string>
#include <cctype>   // tolower

using namespace std;

int main() {
    string S;
    getline(cin, S);

    char target;
    cin >> target;

    int count = 0;

    for (char c : S) {
        if (tolower(c) == tolower(target)) {
            count++;
        }
    }

    cout << count << "\n";
    return 0;
}


// 3. Second Largest Number

// #include <iostream>

// using namespace std;

// int main() 
// {
//     int n;
//     cin >> n;

//     int largest = 0;
//     int second = 0;

//     for (int i = 0; i < n ; i++) {
//         int x;
//         cin >> x;

//         if (x > largest) {
//             largest = x;
//         } else {
//             if ( x > second) {
//                 second = x;
//             }
//         }
//     }

//     cout << second << "\n";

//     return 0;
// }

// Feedback
// cannot be work when numbers are negative
// lack of condition

// Solution
#include <iostream>
#include <climits>
using namespace std;

int main() {
    int n;
    cin >> n;

    int largest = INT_MIN;
    int second = INT_MIN;

    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;

        if (x > largest) {
            second = largest;
            largest = x;
        }
        else if (x < largest && x > second) {
            second = x;
        }
    }

    cout << second << "\n";
    return 0;
}
// reason that set INT_MIN on both larget and second is to set both variable become smaller than 'x' which we want to compare
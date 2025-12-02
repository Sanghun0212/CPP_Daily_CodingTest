// Day5_Coding_Test
// 1. Minimum and Maximum with Index
// #include <iostream>
// #include <climits>
// using namespace std;

// int main()
// {
//     int n;
//     cin >> n;

//     int min_value = INT_MAX;
//     int max_value = INT_MIN;
//     int min_index = 0;
//     int max_index = 0;

//     for(int i = 0; i < n; i++) {
//         int x;
//         cin >> x;

//         if( x > max_value ) {
//             if( ajhhhhhhhh)
//             max_index = i;
//             max_value = x;

//         } else if( x < min_value ) {
//             min_index = i;
//             min_value = x;
//         } 

//     }
// }

// Feedback
// - need to rebuild the loop

// Solution
#include <iostream>
#include <climits>

using namespace std;

int main()
{
    int n;
    cin >> n;

    int min_value = INT_MAX;
    int max_value = INT_MIN;
    int min_index = 0;
    int max_index = 0;

    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;

        if (x > max_value) {
            max_value = x;
            max_index = i;
        }

        if (x < min_value) {
            min_value = x;
            min_index = i;
        }
    }

    cout << min_value << " " << min_index << " "
        << max_value << " " << max_index << "\n";

    return 0;
}


// 2. Check Palindrome
// #include <iostream>
// #include <string>
// #include <vector>

// using namespace std;

// int main() 
// {
//     string S;
//     cin >> S;

//     vector<char> a(?);

//     for(char c : S) {
//         // vector¿¡ Ãß°¡
//     }

//     if(a[0] == a[i-1] && ....)
//         cout << "YES";
//         ....;
// }


// solution
#include <iostream>
#include <string>
using namespace std;

int main()
{
    string S;
    cin >> S;

    int left = 0;            // index of front word
    int right = S.size() - 1; // index of last word
    bool is_pal = true;      // bool is logic that contain true & false

    while (left < right) {
        if (S[left] != S[right]) { // ! means not equal
            is_pal = false;
            break;
        }
        left++;
        right--;
    }

    if (is_pal) {
        cout << "YES\n";
    }
    else {
        cout << "NO\n";
    }

    return 0;
}

//3. Final Position After Moves
#include <iostream>
#include <string>
using namespace std;

int main()
{
    string S;
    cin >> S;

    int x = 0;
    int y = 0;

    for (char c : S) {
        if (c == 'U') {
            y++;
        }
        else if (c == 'D') {
            y--;
        }
        else if (c == 'L') {
            x--;
        }
        else if (c == 'R') {
            x++;
        }
        else {
            return 1;
        }
    }

    cout << x << " " << y << "\n";

    return 0;


}
// Day2_Coding Test
// 1. print arrat in reverse order
// #include <iostream>
// #include <vector>
// #include <algorithm>

// using namespace std;

// int main() 
// {
//     int n;
//     cin >> n;

//     vector<int> integars;

//     for (int i = 0; i < n; i++) {
//         int x;
//         while(cin >> x){
//             integars.push_back(x);
//         }

//     }

//     sort(integars.end(), integars.begin());

//     // cout << integars << "\n";

//     return 0;

// }

// Feedback
// while is not needed - just cin >> x need
// sort(integars.end(), integars.begin()) is not available
// cout << integars -- cannot output entire vector at once, need to add 'for' loop


// Solution
// 1)
#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> a(n);

    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    for (int i = n - 1; i >= 0; i--) {
        cout << a[i];
    }

    cout << "\n";

    return 0;

}
// 2)

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<int> a(n);

    for (int i = 0; i < n; i++) cin >> a[i];

    reverse(a.begin(), a.end());

    for (int i = 0; i < n; i++) {
        cout << a[i];
        if (i + 1 < n) cout << " ";
    }

    cout << "\n";
    return 0;
}




// 2. count occurrences of a character
#include <iostream>
#include <string>

using namespace std;

int main()
{
    string S;

    char c;             // variable that save only 1 letter 

    getline(cin, S);    // save entire word line 

    cin >> c;

    int count = 0;
    for (char ch : S) { // S 문자열을 앞에서부터 끝까지 한 글자씩 순회함
        if (ch == c) {
            count++;
        }
    }
    cout << count << "\n";
    return 0;
}

// 3. Find the Minimum Value
#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;

    int min_value = 1000000000000;

    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        while (x < min_value) {
            min_value = x;
        }
    }

    cout << min_value << "\n";
    return 0;
}

// feedback



// solution

#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int x;
    cin >> x;
    int min_value = x;

    for (int i = 1; i < n; i++) {
        cin >> x;
        if (x < min_value) {
            min_value = x;
        }
    }

    cout << min_value << "\n";
    return 0;
}

// Day8_Coding_Test
//

// problem 1 -  Range Sum wit Prefix Sum
// Description:
// You are given an integer N, followed by N integers.
// Then you are given two integers L and R (0-based index, and 0 <= L <= R < N).

// Compute the sum of the elements from index L to R (inclusive).
#include <iostream>
#include <vector>
using namespace std;


int main()
{
    int n;
    cin >> n;

    vector<int> a(n);

    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    vector<int> perfix(n);
    perfix[0] = a[0];
    for (int i = 0; i < n; i++) {
        perfix[i] = perfix[i - 1] + a[i];
    }

    // a = [2, 4, 1, 7, 3]
    // perfix[0] = 2
    // perfix[1] = 2 + 4 = 6
    // perfix[2] = 6 + 1 = 7
    // perfix[3] = 7 + 7 = 14
    // perfix[4] = 14 + 3 = 17

    int L, R;
    cin >> L >> R;

    int result;
    if (L == 0) {
        result = perfix[R];
    }
    else {
        result = perfix[R] - perfix[L - 1];
    }

    cout << result << "\n";
    return 0;

}


// Problem 2 - Maximum Sum of K consevutive Numbers
// Description:
// You are given an integer N, followed by N integers, and then an integer K (1 <= K <= N).
// Find the maximum sum of any contiguous subarray of length K.

#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<int> a(n);

    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    int k;
    cin >> k;

    int current_sum;

    if (k < 1 || k > n) {
        return 0;
    }

    int current_sum = 0;
    for (int i = 0; i < k; i++) {
        current_sum += a[i];
    }

    int max_sum = current_sum;

    for (int i = k; i < n; i++) {
        current_sum += a[i];
        current_sum -= a[i - k];

        if (current_sum > max_sum) {
            max_sum = current_sum;
        }
    }

    cout << max_sum << "\n";

    return 0;
}

// problem 3 - Count '#' in a grid
// Description:
// You are given a grid of size H x W, made of characters '.' and '#'.
// Count how many '#' characters are in the grid.

#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
    int H, W;
    cin >> H >> W;

    int count = 0;
    string row;

    for (int i = 0; i < H; i++) {
        cin >> row;
        for (char c : row) {
            if (c == '#') {
                count++;
            }
        }
    }

    cout << count << "\n";
    return 0;
}
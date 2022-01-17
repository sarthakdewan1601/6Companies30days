// { Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution {
public:
    int minSteps(int D) {
        // code here
        int steps = 0;
        int sum = 0;
        while (true)
        {
            sum += steps;
            steps += 1;
            if (sum == D)
            {
                return steps - 1;
            }
            if (sum > D && (sum - D) % 2 == 0)
            {
                return steps - 1;
            }
        }
        return 0;
    }
};

// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int D;
        cin >> D;

        Solution ob;
        cout << ob.minSteps(D) << "\n";
    }
    return 0;
}  // } Driver Code Ends
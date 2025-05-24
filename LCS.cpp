#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

pair<string, int> longestCommonSubsequence(string X, string Y) {
    int m = X.size();
    int n = Y.size();
    vector<vector<int>> dp(m + 1, vector<int>(n + 1, 0));

    // Fill dp table
    for (int i = 1; i <= m; ++i) {
        for (int j = 1; j <= n; ++j) {
            if (X[i - 1] == Y[j - 1])
                dp[i][j] = 1 + dp[i - 1][j - 1];
            else
                dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
        }
    }

    // Backtrack to get LCS string
    int i = m, j = n;
    string lcs = "";
    while (i > 0 && j > 0) {
        if (X[i - 1] == Y[j - 1]) {
            lcs += X[i - 1];
            i--; j--;
        } else if (dp[i - 1][j] > dp[i][j - 1]) {
            i--;
        } else {
            j--;
        }
    }

    reverse(lcs.begin(), lcs.end()); // reverse the LCS as we built it backwards
    return {lcs, dp[m][n]};
}

int main() {
    string seq1, seq2;
    cout << "Enter first sequence: ";
    cin >> seq1;
    cout << "Enter second sequence: ";
    cin >> seq2;

    pair<string, int> result = longestCommonSubsequence(seq1, seq2);
    cout << "Longest Common Subsequence: " << result.first << endl;
    cout << "length = " << result.second << endl;

    return 0;
}

class Solution {
public:
    string longestPalindrome(string s) {
    int n = s.size();
    vector<vector<bool>> dp(n, vector<bool>(n, false));

    int mx = 1;
    int st = 0;

    for (int l = 1; l <= n; l++) {
        for (int i = 0; i + l - 1 < n; i++) {
            int j = i + l - 1;

            if (i == j) {
                dp[i][j] = true;
            }
            else if (i + 1 == j) {
                dp[i][j] = (s[i] == s[j]);
            }
            else {
                dp[i][j] = (s[i] == s[j] && dp[i + 1][j - 1]);
            }

            if (dp[i][j] && l > mx) {
                mx = l;
                st = i;
            }
        }
    }

    return s.substr(st, mx);

    }
};
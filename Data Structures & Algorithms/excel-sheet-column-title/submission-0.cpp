class Solution {
public:
    string convertToTitle(int columnNumber) {
        string ans;

        while (columnNumber > 0) {
            columnNumber--;  // Convert 1-based to 0-based

            char ch = 'A' + (columnNumber % 26);
            ans += ch;

            columnNumber /= 26;
        }

        reverse(ans.begin(), ans.end());
        return ans;
    }
};
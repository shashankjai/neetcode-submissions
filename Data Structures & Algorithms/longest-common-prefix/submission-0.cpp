class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int n = strs.size();
        int mini = 1e9;

        for (int i = 0; i < n; i++) {
            mini = min(mini, (int)strs[i].size());
        }

        string s = "";

        for (int j = 0; j < mini; j++) {
            char c = strs[0][j];
            bool ok = true;

            for (int i = 1; i < n; i++) {
                if (strs[i][j] != c) {
                    ok = false;
                    break;
                }
            }

            if (!ok) break;
            s += c;
        }

        return s;
    }
};
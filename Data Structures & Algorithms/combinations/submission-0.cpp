class Solution {
public:
    vector<vector<int>> ans;

    void f(int ind, int n, int k, vector<int>& res) {
        if(res.size() == k) {
            ans.push_back(res);
            return;
        }

        if(ind > n){
            return;
        }

        // Include
        res.push_back(ind);
        f(ind + 1, n, k, res);
        res.pop_back();

        // Exclude
        f(ind + 1, n, k, res);
    }

    vector<vector<int>> combine(int n, int k) {
        vector<int> res;
        f(1, n, k, res);
        return ans;
    }
};
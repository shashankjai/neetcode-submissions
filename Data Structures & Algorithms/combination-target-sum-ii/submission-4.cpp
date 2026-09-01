class Solution {
public:
    vector<vector<int>> ans;
    int n;
    set<vector<int>> st;

    void f(int ind, vector<int>& candidates, int target, vector<int>& res)
    {
        if(target == 0){
            ans.push_back(res);
            return;
        }

        if(ind == n || target < 0){
            return;
        }

        if(target >= candidates[ind]){
            res.push_back(candidates[ind]);

            f(ind + 1, candidates, target - candidates[ind], res);

            res.pop_back();
        }

        int next = ind + 1;

        while(next < n && candidates[ind] == candidates[next]){
            next++;
        }

        f(next, candidates, target, res);
    }

    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        vector<int> res;
        n = candidates.size();

        sort(candidates.begin(), candidates.end());

        f(0, candidates, target, res);

        return ans;
    }
};
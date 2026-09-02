class Solution {
public:
    vector<vector<int>> ans;

    void f(int ind, vector<int>& nums, vector<int>& res,
           vector<int>& used) {

        if(ind == nums.size()) {
            ans.push_back(res);
            return;
        }

        for(int i = 0; i < nums.size(); i++) {

            if(used[i]){
                continue;
            }

            if(i > 0 && nums[i] == nums[i-1] && !used[i-1]){
                continue;
            }

            used[i] = 1;
            res.push_back(nums[i]);

            f(ind + 1, nums, res, used);

            res.pop_back();
            used[i] = 0;
        }
    }

    vector<vector<int>> permuteUnique(vector<int>& nums) {
        sort(nums.begin(), nums.end());

        vector<int> res;
        vector<int> used(nums.size(), 0);

        f(0, nums, res, used);

        return ans;
    }
};
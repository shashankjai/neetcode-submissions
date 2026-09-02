class Solution {
public:
    void f(int i, vector<int>& nums, vector<vector<int>>& ans,
           vector<int>& res) {

        if(i == nums.size()) {
            ans.push_back(res);
            return;
        }

        // include
        res.push_back(nums[i]);
        f(i + 1, nums, ans, res);
        res.pop_back();
         int idx = i + 1;
        while(idx < nums.size() && nums[idx] == nums[i]) {
            idx++;
        }
        //exclude
        f(idx, nums, ans, res);
    }

    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        sort(nums.begin(), nums.end());

        vector<int> res;
        vector<vector<int>> ans;

        f(0, nums, ans, res);

        return ans;
    }
};
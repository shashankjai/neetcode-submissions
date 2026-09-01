class Solution {
public:
    vector<vector<int>> ans;
    int n;

    void f(int ind, vector<int> nums, int target, vector<int>& res)
    {
        if(target == 0){
            ans.push_back(res);
            return;
        }

        if(ind == n || target < 0){
            return;
        }

        if(target >= nums[ind]){
            res.push_back(nums[ind]);
            f(ind, nums, target - nums[ind], res);
            res.pop_back();
        }

        f(ind + 1, nums, target, res);
    }

    vector<vector<int>> combinationSum(vector<int>& nums, int target) {
        vector<int> res;
        n = nums.size();
        f(0, nums, target, res);
        return ans;
    }
};
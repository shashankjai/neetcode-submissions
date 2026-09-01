class Solution {
public:
vector<vector<int>>ans;
int n;
void f(int ind,vector<int>&nums,vector<int>&res){
    if(ind==n){
        ans.push_back(res);
        return;
    }
    res.push_back(nums[ind]);
    f(ind+1,nums,res);
    res.pop_back();
    f(ind+1,nums,res);

}
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<int>res;
        n=nums.size();
        f(0,nums,res);
        return ans; 
    }
};

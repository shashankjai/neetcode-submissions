class Solution {
public:
int ans=0;
int n;
void f(int ind,vector<int>&nums,int xr){
      if(ind==n){
        ans+=xr;
        return;
      }
      f(ind+1,nums,xr^nums[ind]);
      f(ind+1,nums,xr);
}
    int subsetXORSum(vector<int>& nums) {
        n=nums.size();
        int xr=0;
        f(0,nums,xr);
        return ans;
    }
};
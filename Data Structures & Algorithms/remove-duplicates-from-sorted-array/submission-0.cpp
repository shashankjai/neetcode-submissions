class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
      int ind=0;
      int n=nums.size();
      for(int i=1;i<n;i++){
        if(nums[i]!=nums[i-1]){
           nums[ind]=nums[i-1];
           nums[ind+1]=nums[i];
           ind++;
        }
      }
      return ind+1;
    }
};
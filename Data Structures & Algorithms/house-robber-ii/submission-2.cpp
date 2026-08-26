class Solution {
public:
    int r(vector<int>& nums) { 
        int n = nums.size();

        if(n == 1) return nums[0];

        vector<int> dp(n);
        dp[0] = nums[0];
        dp[1] = max(nums[0], nums[1]);

        for(int i = 2; i < n; i++) { 
            dp[i] = max(nums[i] + dp[i-2], dp[i-1]); 
        }

        return dp[n-1]; 
    }

    int rob(vector<int>& nums) {
        int n = nums.size();

        if(n == 0) return 0;
        if(n == 1) return nums[0];

        vector<int> temp, temp2;

        for(int i = 0; i < n-1; i++){
            temp.push_back(nums[i]);
        }

        int ans1 = r(temp);

        for(int i = 1; i < n; i++){
            temp2.push_back(nums[i]);
        }

        int ans2 = r(temp2);

        return max(ans1, ans2);
    }
};
class Solution {
public:
    bool f(long long mid, vector<int>& nums, int k) {
        long long sum = 0;
        int cnt = 1;

        for (int i = 0; i < nums.size(); i++) {
            if (sum + nums[i] > mid) {
                cnt++;
                sum = nums[i];
            }
            else {
                sum += nums[i];
            }
        }

        return cnt <= k;
    }

    int splitArray(vector<int>& nums, int k) {
        long long l = *max_element(nums.begin(), nums.end());
        long long r = accumulate(nums.begin(), nums.end(), 0LL);
        long long ans = r;

        while (l <= r) {
            long long mid = l + (r - l) / 2;

            if (f(mid, nums, k)) {
                ans = mid;
                r = mid - 1;
            }
            else {
                l = mid + 1;
            }
        }

        return ans;
    }
};
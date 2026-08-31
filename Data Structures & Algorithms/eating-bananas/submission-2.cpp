class Solution {
public:
    bool predicate(int mid, vector<int>& piles, int h) {
        long long cnt = 0;

        for (int it : piles) {
            cnt += (it + mid - 1) / mid;
        }

        return cnt <= h;
    }

    int minEatingSpeed(vector<int>& piles, int h) {
        int l = 1;
        int r = 1e9;

        int ans = -1;

        while (l <= r) {
            int mid = l + (r - l) / 2;

            if (predicate(mid, piles, h)) {
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
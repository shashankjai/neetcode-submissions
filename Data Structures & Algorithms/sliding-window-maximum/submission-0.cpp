class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        priority_queue<pair<int, int>> pq;
        int left = 0;
        int right = 0;
        while (right < k) {
            pq.push({nums[right], right});
            right++;
        }
        vector<int> ans;
        unordered_set<int> st;
        while (right < nums.size()) {
            pair<int, int> p = pq.top();
            while (st.find(p.second) != st.end()) {
                pq.pop();
                p = pq.top();
            }
            ans.push_back(p.first);
            st.insert(left);
            pq.push({nums[right], right});
            left++;
            right++;
        }
        pair<int, int> p = pq.top();
        while (st.find(p.second) != st.end()) {
            pq.pop();
            p = pq.top();
        }
        ans.push_back(p.first);
        return ans;

    }
};
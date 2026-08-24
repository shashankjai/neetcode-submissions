class Solution {
public:
    int lengthOfLongestSubstringTwoDistinct(string s) {
        int n=s.size();
       map<char,int>mp;
        int l=0,r=0;
        int maxi=0;
        while(r<n){
            mp[s[r]]++;
            while(mp.size()>2){
                mp[s[l]]--;
                if(mp[s[l]]==0){
                    mp.erase(s[l]);
                }
                l++;
            }
            maxi=max(maxi,r-l+1);
            r++;
        }
        return maxi;

    }
};
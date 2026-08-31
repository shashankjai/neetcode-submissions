class Solution {
public:
int predicate(int mid,vector<int>&weights,int days){
    int cnt=1;
    int sum=0;
    for(auto it : weights){
        if(it>mid){
            return false;
        }
        if(sum+it > mid){
            sum=it;
            cnt++;
        }
        else{
            sum+=it;
        }
    }
    return cnt<=days;
}
    int shipWithinDays(vector<int>& weights, int days) {
        int l=1;
        int ans=-1;
        int r=accumulate(weights.begin(),weights.end(),0);
        while(l<=r){
            int mid=l+(r-l)/2;
            if(predicate(mid,weights,days)){
                ans=mid;
                r=mid-1;
            }
            else{
                l=mid+1;
            }
        }
        return ans;
    }
};
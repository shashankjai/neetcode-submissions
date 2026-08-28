class Solution {
public:
    int maxArea(vector<int>& heights) {
        int n=heights.size();
        int l=0;
        int r=n-1;
        int maxi=0;

        while(l<r){
         if(heights[l]<heights[r]){
           maxi=max(maxi,min(heights[l],heights[r])*(r-l));
           l++;
         }
         else{
           maxi=max(maxi,min(heights[l],heights[r])*(r-l));
           r--;
         }
        }
        return maxi;
    }
};

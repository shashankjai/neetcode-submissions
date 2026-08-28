class Solution {
public:
    int numRescueBoats(vector<int>& people, int limit) {
        int n=people.size();
        sort(people.begin(),people.end());
        int l=0;
        int r=n-1;
       int indexOFLimit = lower_bound(people.begin(), people.end(), limit) - people.begin();
        if(indexOFLimit==0){
            return n;
        }
       if(indexOFLimit<n){
        r=indexOFLimit-1;
       }
       int ans=0;
       while(l<r){
        if(people[l]+people[r]<=limit){
            ans++;
            l++;
            r--;
        }
        else{
            if(people[l]<people[r]){
                r--;
                ans++;
            }
            else{
                l++;
                ans++;
            }
        }

       }
       if(l==r){
        ans++;
       }

       return ans+n-indexOFLimit;


    }
};
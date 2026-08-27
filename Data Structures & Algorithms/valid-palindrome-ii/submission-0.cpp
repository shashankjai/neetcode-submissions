class Solution {
public:
    bool validPalindrome(string s) {
        int l=0;
        int r=s.size()-1;
        int c1=0;
        while(l<r){
           if(s[l]!=s[r]){
            c1++;
            l++;
           }
           else{
            l++;
            r--;
           }
        }
        if(c1<=1){
            return true;
        }
        l=0;
        r=s.size()-1;
        c1=0;
         while(l<r){
           if(s[l]!=s[r]){
            c1++;
            r--;
           }
           else{
            l++;
            r--;
           }
        }
        if(c1<=1){
            return true;
        }
        return false;
    }
};
class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        int l1=0;
        int l2=0;
        int n=word1.size();
        int m=word2.size();
        string res;
       while(l1<n && l2<m){
        res+=word1[l1];
        res+=word2[l2];
        l1++;
        l2++;
       }
       while(l1<n){
         res+=word1[l1];
        l1++;
       }
        while(l2<m){
         res+=word2[l2];
        l2++;
       }
       return res;
    }
};
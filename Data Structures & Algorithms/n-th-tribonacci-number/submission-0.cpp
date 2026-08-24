class Solution {
public:
    int tribonacci(int n) {
        int pre3=0,pre2=1,pre1=1;
        if(n==0){
            return 0;
        }
        if(n<=2){
            return 1;
        }
        for(int i=3;i<=n;i++){
            int cur=pre1+pre2+pre3;
            pre3=pre2;
            pre2=pre1;
            pre1=cur;
        }
        return pre1;
    }
};
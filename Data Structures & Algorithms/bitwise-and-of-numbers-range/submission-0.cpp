class Solution {
public:
    int rangeBitwiseAnd(int left, int right) {
        int shiftC=0;
        while(left!=right){
            left=left>>1;
            right=right>>1;
            shiftC++;
        }
        return left<<shiftC;
    }
};
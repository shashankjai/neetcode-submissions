class Solution {
public:
    int getSum(int a, int b) {

        while (b != 0) {

            // Add without carry
            int sum = a ^ b;

            // Find carry and move it one position left
            int carry = (a & b) << 1;

            // Repeat with sum and carry
            a = sum;
            b = carry;
        }

        return a;
    }
};
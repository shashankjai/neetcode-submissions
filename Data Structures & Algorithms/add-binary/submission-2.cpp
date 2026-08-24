class Solution {
public:
    string addBinary(string a, string b) {
        int n = a.size() - 1;
        int m = b.size() - 1;
        int carry = 0;
        string res;

        while(n >= 0 || m >= 0) {
            int sum = carry;

            if(n >= 0) {
                sum += a[n] - '0';
                n--;
            }

            if(m >= 0) {
                sum += b[m] - '0';
                m--;
            }

            if(sum % 2 == 0) {
                res.push_back('0');
            }
            else {
                res.push_back('1');
            }

            carry = sum / 2;
        }

        if(carry) {
            res += '1';
        }

        reverse(res.begin(), res.end());

        return res;
    }
};
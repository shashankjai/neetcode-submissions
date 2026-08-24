class Solution {
public:
    string addBinary(string a, string b) {
        int n = a.size();
        int m = b.size();

        int i = n - 1;
        int j = m - 1;
        int carry = 0;

        string res;

        while(i >= 0 && j >= 0) {
            if(a[i] == '1' && b[j] == '1') {
                if(carry) {
                    res += '1';
                }
                else {
                    res += '0';
                    carry = 1;
                }
            }
            else if(a[i] == '1') {
                if(carry) {
                    res += '0';
                }
                else {
                    res += '1';
                    carry = 0;
                }
            }
            else if(b[j] == '1') {
                if(carry) {
                    res += '0';
                }
                else {
                    res += '1';
                    carry = 0;
                }
            }
            else {
                if(carry) {
                    res += '1';
                    carry = 0;
                }
                else {
                    res += '0';
                }
            }

            i--;
            j--;
        }

        while(i >= 0) {
            if(a[i] == '1') {
                if(carry) {
                    res += '0';
                }
                else {
                    res += '1';
                }
            }
            else {
                if(carry) {
                    res += '1';
                    carry = 0;
                }
                else {
                    res += '0';
                }
            }
            i--;
        }

        while(j >= 0) {
            if(b[j] == '1') {
                if(carry) {
                    res += '0';
                }
                else {
                    res += '1';
                }
            }
            else {
                if(carry) {
                    res += '1';
                    carry = 0;
                }
                else {
                    res += '0';
                }
            }
            j--;
        }

        if(carry) {
            res += '1';
        }

        reverse(res.begin(), res.end());

        return res;
    }
};
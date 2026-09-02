class Solution {
public:
    int calPoints(vector<string>& operations) {
        int sum = 0;
        stack<int> st;

        for(auto it : operations) {

            if(it == "C") {
                sum -= st.top();
                st.pop();
            }

            else if(it == "+") {
                int a = st.top();
                st.pop();

                int b = st.top();

                int score = a + b;

                st.push(a);
                st.push(score);

                sum += score;
            }

            else if(it == "D") {
                int score = 2 * st.top();

                st.push(score);
                sum += score;
            }

            else {
                int score = stoi(it);

                st.push(score);
                sum += score;
            }
        }

        return sum;
    }
};
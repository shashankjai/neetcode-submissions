class MyStack {
public:
    queue<int> q1, q2;

    MyStack() {
    }

    // q1 ka front hamesha stack ka TOP element rahega
    void push(int x) {

        // New element q2 mein push karo
        q2.push(x);

        // q1 ke saare purane elements q2 ke peeche daal do
        while(!q1.empty()) {
            q2.push(q1.front());
            q1.pop();
        }

        // q1 aur q2 ko swap karo
        swap(q1, q2);
    }

    int pop() {

        // q1 ka front = stack ka top
        int val = q1.front();

        q1.pop();

        return val;
    }

    int top() {

        // q1 ka front = stack ka top
        return q1.front();
    }

    bool empty() {

        return q1.empty();
    }
};
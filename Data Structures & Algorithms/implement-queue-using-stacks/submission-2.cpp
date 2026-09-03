class MyQueue {
public:
    stack<int> st1, st2;

    MyQueue() {
        
    }
    
    void push(int x) {

        // New element st1 mein push karo
        st1.push(x);
    }
    
    int pop() {

        // Agar st2 empty hai,
        // st1 ke saare elements st2 mein transfer karo
        if(st2.empty()) {
            while(!st1.empty()) {
                st2.push(st1.top());
                st1.pop();
            }
        }

        // st2 ka top = queue ka front
        int val = st2.top();
        st2.pop();

        return val;
    }
    
    int peek() {

        // Agar st2 empty hai,
        // elements transfer karo
        if(st2.empty()) {
            while(!st1.empty()) {
                st2.push(st1.top());
                st1.pop();
            }
        }

        // Sirf front return karo
        // remove nahi karna
        return st2.top();
    }
    
    bool empty() {

        // Dono stacks empty hone chahiye
        return st1.empty() && st2.empty();
    }
};
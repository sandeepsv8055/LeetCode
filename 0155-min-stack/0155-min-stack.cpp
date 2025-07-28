class MinStack {
    stack<int> s;     // main stack
    stack<int> minS;  // stack for keeping track of minimums

public:
    MinStack() {} // constructor
    
    void push(int val) {
        s.push(val);

        // If minS is empty or new value is smaller or equal to current min
        if (minS.empty() || val <= minS.top()) {
            minS.push(val);
        }
    }

    void pop() {
        // If top is the current min, remove from minS as well
        if (s.top() == minS.top()) {
            minS.pop();
        }
        s.pop();
    }

    int top() {
        return s.top(); // top of the main stack
    }

    int getMin() {
        return minS.top(); // top of min stack is always the current min
    }
};

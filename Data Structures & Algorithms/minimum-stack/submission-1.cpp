class MinStack {
private:
    vector<int> stk;
    vector<int> minstk;

public:
    MinStack() {}

    
    void push(int val) {
        this->stk.push_back(val);
        int top = minstk.empty() ? INT_MAX: minstk.back();
        cout << top << endl;
        this->minstk.push_back(min(val, top));
       
    }
    
    void pop() {
        if (this->stk.empty()) return;
        this->stk.pop_back();
        cout << minstk.back() << endl;
        this->minstk.pop_back();
    }
    
    int top() {
        return this->stk.back();
    }
    
    int getMin() {
       return this->minstk.back();
    }
};

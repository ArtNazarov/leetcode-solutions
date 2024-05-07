class MyStack {
public:
    MyStack() : headS(), tailS() {
        
    }
    
    void push(int x) {
        if (headS.size()>0) headS.push(x);
        if (headS.size()==0) tailS.push(x);
    }
    
    int pop() {
        vector<int> v;
        if (headS.size()==0){
            while (!tailS.empty()){
                v.push_back( tailS.top() ); tailS.pop();
            }; 
            reverse(v.begin(), v.end());
            while (!v.empty()){
                headS.push(v[0]);
                v.erase(v.begin(), v.begin()+1);
            };
        };

        int x = headS.top();
        headS.pop();
        return x;
    }
    
    int top() {
        //cout << headS.size() << endl;
        //cout << tailS.size() << endl;
        //cout << "total = " << tailS.size() + headS.size() << endl;
        vector<int> v;
        if (headS.size()==0){
             while (!tailS.empty()){
                v.push_back( tailS.top() ); 
                tailS.pop();
            }; 
            reverse(v.begin(), v.end());
            while (!v.empty()){
                headS.push(v[0]);
                v.erase(v.begin(), v.begin()+1);
            };
        };
        // cout << headS.size() << endl;
        // cout << tailS.size() << endl;
        // cout << "total = " << tailS.size() + headS.size() << endl;
        return headS.top();
    }
    
    bool empty() {
        return (headS.size()+tailS.size()==0);
    }

    private:
        stack<int> headS;
        stack<int> tailS;
};

/**
 * Your MyStack object will be instantiated and called as such:
 * MyStack* obj = new MyStack();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->top();
 * bool param_4 = obj->empty();
 */
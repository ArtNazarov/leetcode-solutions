#include <deque>
using namespace std;
class MyQueue {
public:
    MyQueue() : headQ(), tailQ() {
        
    }
    
    void push(int x) {
        tailQ.push_front(x); // always to tail
    }
    
    int pop() {

        if (headQ.size()==0){
            // will reverse order
            while(!tailQ.empty()){
                int x = tailQ.front();
                tailQ.pop_front();
                headQ.push_front(x);
            };
        };
        // always from head
        int x = headQ.front();
        headQ.pop_front();
        
        return x;
    }
    
    int peek() {
        if (headQ.size()==0){
            // will reverse order
            while(!tailQ.empty()){
                int x = tailQ.front();
                tailQ.pop_front();
                headQ.push_front(x);
            };
        };
        // always from head
        int x = headQ.front();
        return x;
    }


    
    bool empty() {
        return headQ.size() + tailQ.size() == 0;
    }

    private:
        deque<int> headQ;
        deque<int> tailQ;
};

/**
 * Your MyQueue object will be instantiated and called as such:
 * MyQueue* obj = new MyQueue();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->peek();
 * bool param_4 = obj->empty();
 */
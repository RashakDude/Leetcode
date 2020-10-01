#include <bits/stdc++.h>
using namespace std;

class MinStack {
public:
    stack<int> main,aux;
    /** initialize your data structure here. */
    MinStack() {
    }
    
    void push(int x) {
        main.push(x) ;
        if(aux.empty() or aux.top() >= x) aux.push(x);
    }
    
    void pop() {
        if(main.top() == aux.top()){
            main.pop() ;
            aux.pop() ;
        }
        else main.pop() ;
    }
    
    int top() {
        return main.top() ;
    }
    
    int getMin() {
        return aux.top() ;
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(x);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */
/*
    written by Pankaj Kumar.
    country:-INDIA
*/
typedef long long ll ;
const ll INF=1e18;
const ll mod1=1e9+7;
const ll mod2=998244353;
//Add main code here

class MyStack
{
public:
    /** Initialize your data structure here. */
    queue<int> q;

    MyStack()
    {
        q.clear();
    }

    /** Push element x onto stack. */
    void push(int x)
    {
        q.push(x);
    }

    /** Removes the element on top of the stack and returns that element. */
    int pop()
    {
        queue<int> temp;
        while (q.size() > 1)
        {
            temp.push(q.front());
            q.pop();
        }
        int t = q.front();
        q.pop();
        q = temp;
        return t;
    }

    /** Get the top element. */
    int top()
    {
        return q.back();
    }

    /** Returns whether the stack is empty. */
    bool empty()
    {
        return q.size() == 0;
    }
};

/**
 * Your MyStack object will be instantiated and called as such:
 * MyStack* obj = new MyStack();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->top();
 * bool param_4 = obj->empty();
 */

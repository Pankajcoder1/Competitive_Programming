/*
    written by Pankaj Kumar.
    country:-INDIA
*/
typedef long long ll ;
const ll INF=1e18;
const ll mod1=1e9+7;
const ll mod2=998244353;
//Add main code here

class MyCircularDeque {
public:
    list<int> v;
    int count;
    MyCircularDeque(int k) {
        v.clear();
        count=k;
    }
    
    bool insertFront(int value) {
        if(v.size()!=count){
            v.push_front(value);
            return true;
        }
        else{
            return false;
        }
    }
    
    bool insertLast(int value) {
        if (v.size() != count)
        {
            v.push_back(value);
            return true;
        }
        else
        {
            return false;
        }
    }
    
    bool deleteFront() {
        if (v.size() != 0)
        {
            v.pop_front();
            return true;
        }
        else
        {
            return false;
        }
    }
    
    bool deleteLast() {
        if (v.size() != 0)
        {
            v.pop_back();
            return true;
        }
        else
        {
            return false;
        }
    }
    
    int getFront() {
        if (v.size() != 0)
        {
            return v.front();
        }
        else
        {
            return -1;
        }
    }
    
    int getRear() {
        if (v.size() != 0)
        {
            return v.back();
        }
        else
        {
            return -1;
        }
    }
    
    bool isEmpty() {
        if(v.size()==0){
            return true;
        }
        else{
            return false;
        }
    }
    
    bool isFull() {
        if (v.size() == count)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};

/**
 * Your MyCircularDeque object will be instantiated and called as such:
 * MyCircularDeque* obj = new MyCircularDeque(k);
 * bool param_1 = obj->insertFront(value);
 * bool param_2 = obj->insertLast(value);
 * bool param_3 = obj->deleteFront();
 * bool param_4 = obj->deleteLast();
 * int param_5 = obj->getFront();
 * int param_6 = obj->getRear();
 * bool param_7 = obj->isEmpty();
 * bool param_8 = obj->isFull();
 */

/*
    written by Pankaj Kumar.
    country:-INDIA
*/
typedef long long ll ;
const ll INF=1e18;
const ll mod1=1e9+7;
const ll mod2=998244353;
//Add main code here

class BrowserHistory
{
public:
    list<string> l;
    list<string>::iterator it;
    BrowserHistory(string homepage)
    {
        l.push_back(homepage);
        it=l.begin();
    }

    void visit(string url)
    {
        it++;
        l.erase(it,l.end());
        l.push_back(url);
        it=l.end();
        it--;

    }

    string back(int steps)
    {
        while(steps>0&&it!=l.begin())
        {
            it--;
            steps--;
        }
        return *it;
    }

    string forward(int steps)
    {
        while(steps>0&&it!=l.end())
        {
            it++;
            steps--;
        }
        if(it==l.end())
            it--;
        return *it;
    }
};

/**
 * Your BrowserHistory object will be instantiated and called as such:
 * BrowserHistory* obj = new BrowserHistory(homepage);
 * obj->visit(url);
 * string param_2 = obj->back(steps);
 * string param_3 = obj->forward(steps);
 */
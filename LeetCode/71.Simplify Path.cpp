/*
    written by Pankaj Kumar.
    country:-INDIA
*/
typedef long long ll ;
const ll INF=1e18;
const ll mod1=1e9+7;
const ll mod2=998244353;
//Add main code here

class Solution
{
public:
    string simplifyPath(string path)
    {

        stack<string> st;
        string res;

        for (int i = 0; i < path.size(); ++i)
        {
            if (path[i] == '/')
                continue;
            string temp="";
            while (i < path.size() && path[i] != '/')
            {
                temp += path[i];
                ++i;
            }
            if (temp == ".")
                continue;
            else if (temp == "..")
            {
                if (!st.empty())
                    st.pop();
            }
            else{
                st.push(temp);
            }
        }

        while (!st.empty())
        {
            res = "/" + st.top() + res;
            st.pop();
        }

        if (res.size() == 0){
            return "/";
        }

        return res;
    }
};
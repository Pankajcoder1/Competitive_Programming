/*
    written by Pankaj Kumar.
    country:-INDIA
*/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;


int solve(){
    
    return 0;
}
int main()
{
    int testCase=1;
    cin>>testCase;
    while(testCase--){
        char ch;
        cin >> ch;
        bool flag=false;
        string str = "codeforces";
        for (auto ch2 : str)
        {
            if (ch2 == ch)
            {
                flag=true;
                break;
            }
        }
        if(flag)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}
/*
    written by Pankaj Kumar.
    country:-INDIA
*/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;


int main()
{
    int test;
    cin>>test;
    while(test--){
        long long n;
        string s;
        cin >> n >> s;
        int xValue = 0, yValue = 0;
        bool flag=false;
        for (auto ch2 : s)
        {
            if (ch2 == 'L')
            {
                xValue--;
            }
            else if (ch2 == 'R')
            {
                xValue++;
            }
            else if (ch2 == 'U')
            {
                yValue++;
            }
            else
            {
                yValue--;
            }
            if (xValue == 1 && yValue == 1)
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
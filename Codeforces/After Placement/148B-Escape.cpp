/*
    written by Pankaj Kumar.
    country:-INDIA
*/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;


int solve(){
    int p,d,t,c,f;
    cin>>p>>d>>t>>f>>c;
    double princess = p * t,T;
    int bijous = 0;
    if (p < d)
    {
        while (princess < c)
        {
            T = princess / (d - p);
            princess += T * p;
            if (princess < c)
            {
                princess += (T + f) * p;
                bijous++;
            }
        }
    }
    cout<<bijous<<endl;
    return 0;
}
int main()
{
    int testCase=1;
    while(testCase--){
        solve();
    }
    return 0;
}
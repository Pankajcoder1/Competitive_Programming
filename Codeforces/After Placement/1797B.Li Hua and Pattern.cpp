/*
    written by Pankaj Kumar.
    country:-INDIA
*/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;


int solve(){
    int a, b;
    cin>>a>>b;
    vector<vector<int>> x(a+1,vector<int>(a+1,0));

    for (int i = 1; i <= a; i++){
        for (int j = 1; j <= a; j++){
            cin>>x[i][j];
        }
    }

    int sum = 0;
    for (int i = 1; i <= a; i++){
        for (int j = 1; j <= a; j++){
            if (x[i][j] != x[a - i + 1][a - j + 1]){
                sum++;
            }
        }
    }

    sum /= 2;
    if(sum>b){
        cout<<"NO"<<endl;
        return 0;
    }
    b-=sum;
    if(a&1){
        cout<<"YES"<<endl;
    }
    // size of matrix -> even
    else if(b&1){
        cout<<"NO"<<endl;
    }
    else{
        cout << "YES" << endl;
    }
    return 0;
}
int main()
{
    int testCase=1;
    cin>>testCase;
    while(testCase--){
        solve();
    }
    return 0;
}
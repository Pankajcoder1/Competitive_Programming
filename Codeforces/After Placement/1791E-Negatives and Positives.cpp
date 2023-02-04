/*
    written by Pankaj Kumar.
    country:-INDIA
*/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;


int solve(){
    long long n;
    cin>>n;
    long long totalSum=0;
    vector<long long> negative, positive;
    int zero=0;
    for(long long i=0;i<n;i++){
        long long temp;
        cin>>temp;
        if(temp<0){
            negative.push_back(-temp);
        }
        else if(temp==0){
            zero++;
        }
        else{
            positive.push_back(temp);
        }
    }
    sort(positive.begin(), positive.end(), greater<long long>());
    for (long long i = 0; i < positive.size(); i++)
    {
        totalSum += positive[i];
    }
    if (negative.size() & 1)
    {
        if(zero==0){
            sort(negative.begin(), negative.end(), greater<long long>());
            for (long long i = 0; i < negative.size(); i++)
            {
                totalSum += negative[i];
            }
            if (positive.size())
            {
                totalSum -= 2 * min(positive[positive.size() - 1], negative[negative.size() - 1]);
            }
            else{
                totalSum -= 2 * negative[negative.size() - 1];
            }
        }
        else{
            for (long long i = 0; i < negative.size(); i++)
            {
                totalSum += negative[i];
            }
        }
    }
    else{
        for (long long i = 0; i < negative.size(); i++)
        {
            totalSum += negative[i];
        }
    }
    cout << totalSum << endl;
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
// { Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function Template for C++

class Solution{
    public:
    int solve(string s, int K){
        // code here
        int temp=0;
        int n=s.size();
        vector<bool> check(n,false);
        for(int i=0;i<n;i++){
            if(s[i]=='1'){
                check[i]=true;
            }
        }
        for(int i=0;i<n;i++){
            if(check[i]==true){
                temp=K;
                continue;
            }
            else if(temp>0){
                temp--;
                s[i]='1';
            }
        }
        for(int i=n-1;i>=0;i--){
            if(check[i]==true){
                temp=K;
                continue;
            }
            else if(temp>0){
                temp--;
                s[i]='1';
            }
        }
        int count=0;
        for(auto x:s){
            if(x=='1'){
                count++;
            }
        }
        // cout<<"s is "<<s<<endl;
        return count;
    }
};

// { Driver Code Starts.

int main(){
    int T;
    cin >> T;
    while(T--){
        string s;
        cin >> s;
        int K;
        cin >> K;
        Solution obj;
        cout << obj.solve(s, K) << "\n";
    }
}  // } Driver Code Ends
/*
    written by Pankaj Kumar.
    country:-INDIA
*/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;


int solve(){
    int n;
    cin>>n;
    // for alice
    bool flag=true;
    int sum=0;
    int whiteAlice=0,whiteBob=0,blackAlice=0,blackBob=0;
    int current=1;
    while(n){
        if(flag){
            if(n>=current){
                n-=current;
                if(sum&1){
                    whiteAlice += (current / 2);
                    blackAlice += current - (current / 2);
                }
                else{
                    blackAlice += (current / 2);
                    whiteAlice += current - (current / 2);
                }
                sum+=current;
                current++;
                if (n >= current)
                {
                    n -= current;
                    if(sum&1){
                        // start with black color
                        whiteBob += (current / 2);
                        blackBob += current - (current / 2);
                    }
                    else{
                        blackBob += (current / 2);
                        whiteBob += current - (current / 2);
                    }
                    sum+=current;
                    current++;
                }
                else
                {
                    if(sum&1){
                        // start with black color
                        whiteBob += (n / 2);
                        blackBob += n - (n / 2);
                    }
                    else{
                        blackBob += (n / 2);
                        whiteBob += n - (n / 2);
                    }
                    sum+=n;
                    n = 0;
                }
            }
            else{
                if(sum&1){
                    // start with black color
                    whiteAlice += (n / 2);
                    blackAlice += n - (n / 2);
                }
                else{
                    blackAlice += (n / 2);
                    whiteAlice += n - (n / 2);
                }
                sum+=n;
                n=0;
            }
            flag=false;
        }
        else{
            if(n>=current){
                n-=current;
                if(sum&1){
                    // start with black color
                    whiteBob += (current / 2);
                    blackBob += current - (current / 2);
                }
                else{
                    blackBob += (current / 2);
                    blackBob+=current-(current/2);
                }
                sum+=current;
                current++;
                if (n >= current)
                {
                    n -= current;
                    if(sum&1){
                        // start with black color
                        whiteAlice += (current / 2);
                        blackAlice += current - (current / 2);
                    }
                    else{
                        blackAlice += (current / 2);
                        whiteAlice += current - (current / 2);
                    }
                    sum+=current;
                    current++;
                }
                else
                {
                    if(sum&1){
                        // start with black color
                        whiteAlice += (n / 2);
                        blackAlice += n - (n / 2);
                    }
                    else{
                        blackAlice += (n / 2);
                        whiteAlice += n - (n / 2);
                    }
                    sum+=n;
                    n = 0;
                }
            }
            else{
                if(sum&1){
                    // start with black color
                    whiteBob += (n / 2);
                    blackBob += n - (n / 2);
                }
                else{
                    blackBob += (n / 2);
                    whiteBob += n - (n / 2);
                }
                sum+=n;
                n=0;
            }
            flag=true;
        }            
    }

    cout<<whiteAlice<<" "<<blackAlice<<" "<<whiteBob<<" "<<blackBob<<endl;
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
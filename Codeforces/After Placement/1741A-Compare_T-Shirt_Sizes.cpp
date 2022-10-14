/*
    written by Pankaj Kumar.
    country:-INDIA
*/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;


/* ascii value
A=65,Z=90,a=97,z=122
*/

// Techniques :
// divide into cases, brute force, pattern finding
// sort, greedy, binary search, two pointer
// transform into graph


int main()
{
    long long testCase;
    cin>>testCase;
    while(testCase--){
        string a,b;
        cin>>a>>b;
        if(a[a.size()-1]=='M' || b[b.size()-1]=='M'){
            if(a[a.size()-1]=='L'){
                cout<<">"<<endl;
            }
            else if(b[b.size()-1]=='L'){
                cout<<"<"<<endl;
            }
            else if(a[a.size()-1]=='S'){
                cout<<"<"<<endl;
            }
            else if(b[b.size()-1]=='S'){
                cout<<">"<<endl;
            }
            else{
                cout<<"="<<endl;
            }
        }
        else{
            if(a[a.size()-1]=='S'){
                if(b[b.size()-1]=='S'){
                    if(a.size()==b.size()){
                        cout<<"="<<endl;
                    }
                    else if(a.size()>b.size()){
                        cout<<"<"<<endl;
                    }
                    else{
                        cout<<">"<<endl;
                    }
                }
                else{
                    cout<<"<"<<endl;
                }
            }
            else{
                if(b[b.size()-1]=='S'){
                    cout<<">"<<endl;
                }
                else{
                    if(a.size()==b.size()){
                        cout<<"="<<endl;
                    }
                    else if(a.size()>b.size()){
                        cout<<">"<<endl;
                    }
                    else{
                        cout<<"<"<<endl;
                    }
                }
            }
        }
    }
    return 0;
}
/* -----------------END OF PROGRAM --------------------*/
/*
* stuff you should look before submission
* constraint and time limit
* int overflow
* special test case (n=0||n=1||n=2)
* don't get stuck on one approach if you get wrong answer
*/

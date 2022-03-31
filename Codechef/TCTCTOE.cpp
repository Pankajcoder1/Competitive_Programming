/*
    written by Pankaj Kumar.
    country:-INDIA
    Institute: National Institute of Technology, Uttarakhand
*/
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;


// Techniques
// divide into cases, brute force, pattern finding
// sort, greedy, binary search, two pointer
// transform into graph

bool check(char grid[3][3],char ch){
	ll count=0;
	for(ll i=0;i<3;i++){
		count=0;
		for(ll j=0;j<3;j++){
			if(grid[i][j]==ch)
				count++;
		}
		if(count==3)
			return true;
		count=0;
		for(ll j=0;j<3;j++){
			if(grid[j][i]==ch)
				count++;
		}
		if(count==3)
			return true;
	}
	count=0;
	for(ll i=0;i<3;i++){
		if(grid[i][i]==ch)
			count++;
	}
	if(count==3)
		return true;
	count=0;
	for(ll i=0;i<3;i++){
		if(grid[i][2-i]==ch)
			count++;
	}
	if(count==3)
		return true;
	else
		return false;
}

long long solve()
{
    char grid[3][3];
    ll no_of_spaces=0,no_of_O=0,no_of_X=0;
    for(ll i=0;i<3;i++){
    	for(ll j=0;j<3;j++){
    		cin>>grid[i][j];
    		if(grid[i][j]=='_')
    			no_of_spaces++;
    		else if(grid[i][j]=='O')
    			no_of_O++;
    		else
    			no_of_X++;
    	}
    }
    if(no_of_O>no_of_X||(no_of_X-no_of_O)>1)
    	cout<<3<<endl;
    else{
    	bool check_X=check(grid,'X');
    	bool check_O=check(grid,'O');
    	if(check_O==true&&check_X==true)
    		cout<<3<<endl;
    	else if(no_of_X>no_of_O&&check_O==true)
    		cout<<3<<endl;
    	else if(no_of_X==no_of_O&&check_X==true)
    		cout<<3<<endl;
    	else if(check_X==true||check_O==true||no_of_spaces==0)
    		cout<<1<<endl;
    	else
    		cout<<2<<endl;
    }
    return 0;
}

int main()
{
    // #ifndef ONLINEJUDGE
    //    freopen("input.txt","r",stdin);
    //    freopen("output.txt","w",stdout);
    // #endif
    long long test=1;
    cin>>test;
    // scanf("%lld",&test);
    while(test--)
    {
        solve();
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
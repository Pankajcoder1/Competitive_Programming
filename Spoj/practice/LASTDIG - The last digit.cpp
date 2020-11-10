/*
    written by Pankaj Kumar.
    country:-INDIA
*/
#include <iostream>
#include <math.h>
using namespace std;

int main() {
    // your code goes here
    int test;
    cin>>test;
    while(test--)
    {
        long long a,b;
        cin>>a>>b;
        if(b==0)
        {
            cout<<1<<endl;
        }
        else
        {
            b=b%4;
            if(b==0)
                b=4;
            cout<<int(pow(a,b))%10<<endl;
        }
    }
    return 0;
}
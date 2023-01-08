/*
    written by Pankaj Kumar.
    country:-INDIA
*/
typedef long long ll ;
const ll INF=1e18;
const ll mod1=1e9+7;
const ll mod2=998244353;
//Add main code here

class Solution
{
public:
    bool isItPossible(string word1, string word2)
    {
        map<char,int> m1,m2;
        for(auto x:word1){
            m1[x]++;
        }
        for(auto x:word2){
            m2[x]++;
        }
        
        for(char ch1='a';ch1<='z';ch1++){
            for(char ch2='a';ch2<='z';ch2++){
                if(m1[ch1]>0&&m2[ch2]>0){
                    m1[ch1]--;
                    m2[ch2]--;
                    m1[ch2]++;
                    m2[ch1]++;
                    int unique1=0,unique2=0;
                    for(char temp='a';temp<='z';temp++){
                        if(m1[temp]>0){
                            unique1++;
                        }
                        if(m2[temp]>0){
                            unique2++;
                        }
                    }
                    if(unique1==unique2){
                        return true;
                    }
                    m1[ch2]--;
                    m2[ch1]--;
                    m1[ch1]++;
                    m2[ch2]++;
                }
            }
        }
        return false;
    }
};
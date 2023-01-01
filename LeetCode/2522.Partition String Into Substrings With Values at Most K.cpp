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
    string num_to_str(int n){
        string s="";
        while(n>0){
            s=char(n%10+'0')+s;
            n/=10;
        }
        return s;
    }
    int compareString(string s1,string s2){
        if(s1.size()>s2.size()){
            return 1;
        }
        else if(s1.size()<s2.size()){
            return -1;
        }
        else{
            for(int i=0;i<s1.size();i++){
                if(int(s1[i]-'0')>int(s2[i]-'0')){
                    return 1;
                }
                else if(int(s1[i]-'0')<int(s2[i]-'0')){
                    return -1;
                }
            }
            return 0;
        }
    }

    int minimumPartition(string s, int k)
    {
        for(auto x:s){
            if(int(x-'0')>k){
                return -1;
            }
        }

        string k1=num_to_str(k);
        int count=0;
        // as previous substring
        string temp="";

        for(int i=0;i<s.size();i++){
            string temp2=temp+s[i];
            if(compareString(temp2,k1)==1){
                // no need to add in previous substring
                // one new substring will start
                if(temp.size()==0){
                    return -1;
                }
                else{
                    // cout<<"temp is "<<temp<<endl;
                    count++;
                    temp=s[i];
                }
            }
            else{
                if(temp.size()==0){
                    count++;
                }
                temp=temp2;
            }

        }
        // cout<<"temp is "<<temp<<endl;
        
        return count;
    }
};
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
    string categorizeBox(int length, int width, int height, int mass)
    {
        long long volume = (long long)length * width * height;
        bool bulky=false, heavy=false;
        if (volume >= (long long)1000000000 || max({length, width, height}) >= (long long)10000)
        {
            bulky=true;
        }
        if (mass >= 100)
        {
            heavy=true;
        }
        if(heavy && bulky){
            return "Both";
        }
        else if(heavy && !bulky){
            return "Heavy";
        }
        else if(!heavy && bulky){
            return "Bulky";
        }
        else{
            return "Neither";
        }
    }
};
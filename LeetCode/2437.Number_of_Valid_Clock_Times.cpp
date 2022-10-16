/*
    written by Pankaj Kumar.
    country:-INDIA
*/
typedef long long ll ;


/* ascii value
A=65,Z=90,a=97,z=122
*/

/*  --------------------MAIN PROGRAM----------------------------*/
// to run ctrl+b
const ll INF=1e18;
const ll mod1=1e9+7;
const ll mod2=998244353;
// Techniques :
// divide into cases, brute force, pattern finding
// sort, greedy, binary search, two pointer
// transform into graph

// Experience :
// Cp is nothing but only observation and mathematics.


//Add main code here

class Solution
{
public:
    bool isValid(string time){
        int hour=(time[0]-'0')*10+(time[1]-'0');
        int minute=(time[3]-'0')*10+(time[4]-'0');
        if(hour>=0&&hour<24&&minute>=0&&minute<60)
            return true;
        return false;
    }

    int countTime(string time)
    {
        int count=0;
        
        for(int hour=0;hour<24;hour++)
        {
            for(int minute=0;minute<60;minute++)
            {
                string hour_string=to_string(hour);
                string minute_string=to_string(minute);
                if(hour_string.size()==1)
                    hour_string="0"+hour_string;
                if(minute_string.size()==1)
                    minute_string="0"+minute_string;
                string new_time=hour_string+":"+minute_string;
                for(int i=0;i<5;i++){
                    if(new_time[i]!=time[i]&&time[i]!='?')
                        break;
                    if(i==4)
                        count++;
                }
            }
        }
        return count;
    }
};

/* -----------------END OF PROGRAM --------------------*/
/*
* stuff you should look before submission
* constraint and time limit
* int overflow
* special test case (n=0||n=1||n=2)
* don't get stuck on one approach if you get wrong answer
*/
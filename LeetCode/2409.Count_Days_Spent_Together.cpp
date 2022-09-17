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
    int countDaysTogether(string arriveAlice, string leaveAlice, string arriveBob, string leaveBob)
    {
        map<int,int> m;
        m[1]=31;
        m[2]=28;
        m[3]=31;
        m[4]=30;
        m[5]=31;
        m[6]=30;
        m[7]=31;
        m[8]=31;
        m[9]=30;
        m[10]=31;
        m[11]=30;
        m[12]=31;
        
        int count=0;
        int month1A=stoi(arriveAlice.substr(0,3));
        int day1A=stoi(arriveAlice.substr(3,5));
        int month2A=stoi(leaveAlice.substr(0,3));
        int day2A=stoi(leaveAlice.substr(3,5));
        int month1B=stoi(arriveBob.substr(0,3));
        int day1B=stoi(arriveBob.substr(3,5));
        int month2B=stoi(leaveBob.substr(0,3));
        int day2B = stoi(leaveBob.substr(3, 5));

        // month
        for(int i=1;i<=12;i++){
            int maxDay = m[i];
            for(int j=1;j<=maxDay;j++){
                int alice=0, bob=0;
                if((i>month1A || (i==month1A && j>=day1A)) && (i<month2A || (i==month2A && j<=day2A))){
                    alice=1;
                }
                if((i>month1B || (i==month1B && j>=day1B)) && (i<month2B || (i==month2B && j<=day2B))){
                    bob++;
                }
                if(alice && bob){
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
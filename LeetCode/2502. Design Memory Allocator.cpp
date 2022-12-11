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

class Allocator
{
public:
    vector<int> arr;
    Allocator(int n)
    {
        arr.resize(n, 0); // 0 means free space
    }

    int allocate(int size, int mID)
    {
        int j = 0;
        int count = 0;
        int flag = 0;
        for (int i = 0; i < arr.size(); i++) // appling sliding window
        {
            if (arr[i] == 0)
            {
                count++;
                if (count == size)
                {
                    flag = 1;
                    break;
                }
            }
            else
            {
                count = 0;
                j = i + 1;
            }
        }
        if (flag)
        {
            for (int i = j; i <= j + size - 1; i++)
                arr[i] = mID;

            return j;
        }
        else
            return -1;
    }

    int free(int mID)
    {
        int count = 0;
        for (int i = 0; i < arr.size(); i++)
        {
            if (arr[i] == mID)
            {
                count++;
                arr[i] = 0;
            }
        }
        return count;
    }
};


/**
 * Your Allocator object will be instantiated and called as such:
 * Allocator* obj = new Allocator(n);
 * int param_1 = obj->allocate(size,mID);
 * int param_2 = obj->free(mID);
 */

/* -----------------END OF PROGRAM --------------------*/
/*
* stuff you should look before submission
* constraint and time limit
* int overflow
* special test case (n=0||n=1||n=2)
* don't get stuck on one approach if you get wrong answer
*/

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
    bool doesValidArrayExist(vector<int> &derived)
    {
        int n = derived.size();
        int ans = 0;
        for (int i = 0; i < n; i++)
        {
            ans ^= derived[i];
        }
        
        return ans==0;
    }
};

// class Solution
// {
// public:
//     bool doesValidArrayExist(vector<int> &derived)
//     {
//         int n = derived.size();

//         if (n == 1)
//         {
//             return derived[0] == 0;
//         }

//         vector<int> v1(n, 0), v2(n, 0);
//         for (int i = 0; i < n - 1; i++)
//         {
//             if (i == 0)
//             {
//                 if (derived[0] == 0)
//                 {
//                     v2[0] = 1, v2[1] = 1;
//                 }
//                 else
//                 {
//                     v1[1] = 1;
//                     v2[0] = 1;
//                 }
//             }
//             else
//             {
//                 v1[i + 1] = derived[i] ^ v1[i];
//                 v2[i + 1] = derived[i] ^ v2[i];
//             }
//         }
//         return (v1[n - 1] ^ v1[0] == derived[n - 1]) || (v2[n - 1] ^ v2[0] == derived[n - 1]);
//     }
// };

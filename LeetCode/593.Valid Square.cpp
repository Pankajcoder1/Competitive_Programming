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
    int calculateDistance(vector<int> &p1, vector<int> &p2)
    {
        int x1 = p1[0], y1 = p1[1];
        int x2 = p2[0], y2 = p2[1];

        int dx = x1 - x2;
        int dy = y1 - y2;

        return dx * dx + dy * dy; // Distance squared
    }

    bool validSquare(vector<int> &p1, vector<int> &p2, vector<int> &p3, vector<int> &p4)
    {
        unordered_set<int> distances;

        distances.insert(calculateDistance(p1, p2));
        distances.insert(calculateDistance(p1, p3));
        distances.insert(calculateDistance(p1, p4));
        distances.insert(calculateDistance(p2, p3));
        distances.insert(calculateDistance(p2, p4));
        distances.insert(calculateDistance(p3, p4));

        return distances.size() == 2 && !distances.count(0); // A square has only 2 unique distances and non-zero distances.
    }
};
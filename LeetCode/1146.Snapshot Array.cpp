/*
    written by Pankaj Kumar.
    country:-INDIA
*/
typedef long long ll ;
const ll INF=1e18;
const ll mod1=1e9+7;
const ll mod2=998244353;
//Add main code here

class SnapshotArray
{
private:
    int snapId;
    map<int, map<int, int>> data;

public:
    SnapshotArray(int length)
    {
        snapId = 0;
        data = map<int, map<int, int>>();
    }

    void set(int index, int val)
    {
        data[index][snapId] = val;
    }

    int snap()
    {
        return snapId++;
    }

    int get(int index, int snap_id)
    {
        auto it = data[index].upper_bound(snap_id);
        if (it == data[index].begin())
        {
            return 0;
        }
        return prev(it)->second;
    }
};
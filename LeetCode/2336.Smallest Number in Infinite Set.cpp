/*
    written by Pankaj Kumar.
    country:-INDIA
*/
typedef long long ll ;
const ll INF=1e18;
const ll mod1=1e9+7;
const ll mod2=998244353;
//Add main code here

// method 1
class SmallestInfiniteSet
{
public:
    set<int> s;
    int current;
    SmallestInfiniteSet()
    {
        current=1;
    }

    int popSmallest()
    {
        if(s.size()){
            int temp=*s.begin();
            s.erase(s.begin());
            return temp;
        }
        else{
            return current++;
        }
    }

    void addBack(int num)
    {
        if(num<current){
            s.insert(num);
        }
    }
};

// method 2
// class SmallestInfiniteSet
// {
// public:
//     set<int> s;
//     SmallestInfiniteSet()
//     {
//         for (int i = 1; i <= 2000; i++)
//         {
//             s.insert(i);
//         }
//     }

//     int popSmallest()
//     {
//         int temp = *s.begin();
//         s.erase(s.begin());
//         return temp;
//     }

//     void addBack(int num)
//     {
//         s.insert(num);
//     }
// };

/**
 * Your SmallestInfiniteSet object will be instantiated and called as such:
 * SmallestInfiniteSet* obj = new SmallestInfiniteSet();
 * int param_1 = obj->popSmallest();
 * obj->addBack(num);
 */
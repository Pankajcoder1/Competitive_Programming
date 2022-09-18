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
struct node{
    node* child[26];
    int cnt;
    node(){
        for(int i=0;i<26;i++){
            child[i]=NULL;
        }
        cnt=0;
    }
};


class Solution
{
public:
    node* root;
    void insert(string s){
        node* temp=root;
        for(auto x:s){
            int pos=x-'a';
            if(temp->child[pos]==NULL){
                temp->child[pos]=new node();
            }
            temp=temp->child[pos];
            temp->cnt++;
        }
    }

    int search(string s){
        node* temp=root;
        int ans=0;
        for(auto x:s){
            int pos=x-'a';
            if(temp->child[pos]==NULL){
                return 0;
            }
            temp=temp->child[pos];
            ans+=temp->cnt;
        }
        return ans;
    }


    vector<int> sumPrefixScores(vector<string> &words)
    {
        root=new node();
        for(auto word:words){
            insert(word);
        }
        vector<int> ans;
        for(auto word:words){
            ans.push_back(search(word));
        }
        return ans;
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
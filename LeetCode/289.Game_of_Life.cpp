/*
    written by Pankaj Kumar.
    country:-INDIA
*/
typedef long long ll ;
typedef vector<int> vl;
typedef vector<vector<int>> vvl;
#define speed cin.tie(0);cout.tie(0);ios_base::sync_with_stdio(0);
/*  Abbrevations  */
#define ff first
#define ss second
#define mp make_pair
#define pb push_back
// Some print
#define no cout<<"NO"<<endl;
#define yes cout<<"YES"<<endl;
// sort
#define all(V) (V).begin(),(V).end()
#define srt(V) sort(all(V))
#define srtGreat(V) sort(all(V),greater<ll>())
// some extra
#define printv(v) for(ll i=0;i<ll(v.size());i++){cout<<v[i]<<" ";} cout<<endl;
#define precision(x) cout<<fixed<<setprecision(x);
#define sz(V) ll(V.size())


/* ascii value
A=65,Z=90,a=97,z=122
*/

/* Some syntax 
//Syntax to create a min heap for priority queue
//priority_queue <int, vector<int>, greater<int>>pq;
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

class Solution {
public:
    int countNeighbors(const vector<vector<int>>& board, int r, int c) {
        bool up = r > 0;
        bool down = r < board.size() - 1;
        bool left = c > 0;
        bool right = c < board[0].size() - 1;
        int count = 0;
        
        if (up) {
            count += board[r - 1][c] & 1;
            if (left) {
                count += board[r - 1][c - 1] & 1;
            }
            if (right) {
                count += board[r - 1][c + 1] & 1;
            }
        }
        if (down) {
            count += board[r + 1][c] & 1;
            if (left) {
                count += board[r + 1][c - 1] & 1;
            }
            if (right) {
                count += board[r + 1][c + 1] & 1;
            }
        }
        if (left) {
            count += board[r][c - 1] & 1;
        }
        if (right) {
            count += board[r][c + 1] & 1;
        }
        return count;
    }

    void gameOfLife(vector<vector<int>>& board) {
        for(int i=0;i<board.size();i++){
            for(int j=0;j<board[0].size();j++){
                int living_neighbors = countNeighbors(board, i, j);
                if (board[i][j] == 1 && (living_neighbors == 2 || living_neighbors == 3)) {
                    board[i][j] += 2;
                } else if (board[i][j] == 0 && living_neighbors == 3) {
                    board[i][j] += 2;
                }
            }
        }
        for (int i = 0; i < board.size(); i += 1) {
            for (int j = 0; j < board[0].size(); j += 1) {
                if (board[i][j] & 2) {
                    board[i][j] = 1;
                } else {
                    board[i][j] = 0;
                }
            }
        }
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
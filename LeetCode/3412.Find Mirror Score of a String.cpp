class Solution {
public:
    char find_mirror(char ch) {
        return 'a' + 'z' - ch ;
    }
    long long calculateScore(string s) {
        map<char , set<int>> mp;
        
        long long score = 0 ;
        for(int i=0 ; i < s.size() ; i++) {
            char mir = find_mirror(s[i]);

            if( mp.find(mir) != mp.end() && mp[mir].size() > 0 ) {
                    auto it = mp[mir].rbegin() ;
                    score += i - *it ;
                    mp[mir].erase(*it) ;
            }
            else {
                mp[s[i]].insert(i) ;
            }
        }
        return score ;
    }
};

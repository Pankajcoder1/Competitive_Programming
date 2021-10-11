class Solution {
public:
    string interpret(string command) {
        string ans="";
        int n=command.size();
        for(int i=0;i<int(command.size());i++)
        {
            if(command[i]=='G')
                ans+='G';
            else if(i+1<n&&command[i]=='('&&command[i+1]==')')
            {
                ans+='o';
                i++;
            }
            else if(i+3<n&&command[i]=='('&&command[i+1]=='a'&&command[i+2]=='l'&&command[i+3]==')')
            {
                ans+='a';
                ans+='l';
                i+=2;
            }
        }
        return ans;
    }
};
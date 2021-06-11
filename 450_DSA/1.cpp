string reverseWord(string str){
    
  //Your code here
  string ans="";
  for(int i=str.size()-1;i>=0;i--){
      ans+=str[i];
  }
  return ans;
}
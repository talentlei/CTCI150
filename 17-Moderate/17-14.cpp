
int segment(unordered_set<string>& dicts,string s){
  int n = s.size();
  if(n==0) return 0;
  vector<int> dp(n+1,n);
  dp[0] = 0;
  for(int i=1;i<=s.size(); i++){
    for(int j=0; j<i;j++){
      int temp = (dict.find(s.substr(j,i-j))==dict.end())?dp[j]+i-j:d[j];
      dp[i]=min(dp[i],temp);
    }
  }
  return dp[n];
}

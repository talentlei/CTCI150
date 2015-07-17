
bool cmp(const pair<int,int >& p1, const pair<int,int>& p2){
  return p1.first<p2.first&&p1.second<p2.second;
}
int highestTower(vector<pair<int,int> >& persons){
  if(persons.size()==0) return 0;
  sort(persons.begin(),persons.end(),cmp);
  vector<int> dp(persons.size(),0);
  dp[0] = 1;
  for(int i=1; i<persons.size(); i++){
    for(int j=0; j<i; j++){
      if(cmp(persons[j]<persons[i])){
        dp[i] = max(dp[i],dp[j]+1);
      }
    }
  }
  return dp[i-1];
}

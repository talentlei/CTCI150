
void vaildParenthese(int n){
  vector<char> one;
  int n_open = 0,n_close=0;
  dfs(one,n_open,n_close,n)
}

void print(const vector<char>& one){
  for(char ch: one)
    cout<<ch;
  cout<<endl;
}
void dfs(vector<char>& one, int n_open, int n_close,int n){
    if(n_open==n&&n_close==n){
      print(one);
      return ;
    }
    if(n_open<n){
      one.push_back('(');
      n_open++;
      dfs(one,n_open,n_close,n);
      one.pop_back();
      n_open--;
    }
    if(n_open>n_close){
      one.push_back(')');
      n_close++;
      dfs(one,n_open,n_close,n);
      one.pop_back();
      n_close++;
    }
    
}

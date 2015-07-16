void queue8(){
  vector<int> board(8,-1);
  vector<int> used(8,false);
  _queue8(used,board,0);
}

void _queue8(vector<bool>& used, vector<int>& board,int dep){
    if(dep==board.size()){
      print(board);
      return; 
    }
    for(int i=0; i<used.size();i++){
      if(!used[i]&&check(used,board,i,dep)){
        used[i] =true;
        board[dep] = i;
        _queue8(used,board,dep+1);
        board[dep] = -1;
        used[i]=false;
      }
    }
}

bool check(vector<bool>& used, vector<int>& board, int pos,int dep){
  for(int i=0; i<dep; i++){
    if(pos==board[i])
      return false;
    if(pos-board[i]==dep-i||pos-board[i]==i-dep)
      return false;
  }
  return true;
  
  
}

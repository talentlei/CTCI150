
//use 0,1,2 stand 3 status;
// 0  unused, 1 white, 2 black

bool isFinished(vector<vector<int>> & piece){
  int n = piece.size();
  int row, col;
  //check rows;
  for(row=0; row<n; row++){
    if(piece[row][0]!=0){
      for(col=1; col<n; col++){
        if(piece[row][col-1]!=piece[row][col])
          break;
      }
      if(col==n) return true;
    }
  }
  //check col
  for(col=0; col<n; col++){
    if(piece[0][col]!=0){
      for(row=1; row<n; row++){
        if(piece[row-1][col]!=piece[row-1][col])
          break;
      }
      if(row==n) return true;
    }
  }
  //check slope
  if(piece[0][0]!=0){
    for(row=1; row<n; row++)
      if(piece[row-1][row-1]!=piece[row][row])
        break;
    if(row==n)
      return true;
  }
  if(piece[n-1][0]){
    for(row=n-2; row>=0; row--)
      if(piece[row-1][n-row]!=piece[row][n-1-row])
        break;
    if(row==0)
      return true;
  }
  return false;
}

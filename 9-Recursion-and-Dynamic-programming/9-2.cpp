

int pathWaysByDP(int x, int y ){
  vector<vector<int > > vec(x+1,vector<int>(y+1,1));
  for(int i=1; i<=x; i++){
    for(int j=1; j<=y; j++){
      vec[i][j] = vec[i-1][j]+vec[i][j-1];
    }
  }
  return vec[x][y];
}

//follow up



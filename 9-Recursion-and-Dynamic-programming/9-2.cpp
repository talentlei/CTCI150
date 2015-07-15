

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
//BFS  
// o means can be reached , x can't be reached.
bool findPath(const vector<vector<char>>& matrix){
  if(matrix.size()==0||matrix[0].size()==0||matrix[0][0]=='x') return false;
  int rows = matrix.size(), cols = matrix[0].size();
  set<int> visited;
  queue<int> myQueue;
  myQueue.push(0);
  while(!myQueue.empty()){
    visited.insert(myQueue.top());
    int pos = myQueue.top();
    int x = pos/cols;
    int y = pos%cols;
    
    if(x<rows-1&&matrix[x+1][y]=='o'&&visited.find((x+1)*cols+y)!=visited.end()){
      if(x+1==rows-1&&y==cols-1)
        return true;
      myQueue.insert((x+1)*cols+y);
    }
    if(y<cols-1&&matrix[x][y+1]=='o'&&visited.find(x*cols+y+1)!=visited.end()){
      if(x==rows-1&&y+1=cols-1)
        return true;
      myQueue.insert(x*cols+y+1);
    }
  }
  return false;
}


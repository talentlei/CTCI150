template<class T>
vector<T> randomSelection(vector<T>& array, int m){
  int n = array.size();
  if(m>n)
    throw exception();
  vector<T> res(m,0);
  for(int i=0; i<n; i++){
    if(i<m)
      res[i] = array[i];
    else{
     int idx = rand()%(i+1) ;
     if(idx<m)
       res[idx] = array[i]
    }
  }
  return res;
}

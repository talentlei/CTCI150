
//heap
vector<int> topK(const vector<int>& array){
  vector<int> res(array.begin(),array.begin()+10000000);
  make_heap(res.begin(),res.end());
  for(int i=1000000; i<array.size(); i++){
    if(array[i]<res[0]){
      pop_heap();
      push_heap(array[i]);
    }
  }
  return res;
}

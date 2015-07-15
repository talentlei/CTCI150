
template<class T>
vector<vector<T>> res;
vector<vector<T>> getAllSubset(vector<T>& nums){
  vector<T> one;
  getSubset(nums,one,0);
  return res;
}

void  getSubset(vector<T>& nums , vector<T>&one, int pos){
    if(pos==nums.size()){
      res.push_back(one);
      return;
    }
    one.push_back(nums[pos]);
    getSubset(nums,one,pos+1);
    one.pop_back();
    getSubset(nums,one,pos+1);
}

//this method require nums.size() <32;
vector<vector<T> > getAllSubset2(vector<T>& nums){
    int n = nums.size();  //n<32
    vector<vector<T>> res;
    for(unsigned int i=0; i<2^n; i++){
      res.push_back(getSubset(nums,i));
    }
}

vector<T> getSubset(vector<T>& nums,unsigned int k){
  vector<T> one;
  for(int i=0;k!=0; i++,k>>1){
    if(k&1==1)
      one.push_back(nums[i]);
  }
  return one;
}


vector<vector<T>> getAllSubset3(vector<T>& nums,int dep){
  if(dep==nums.size()){
    return {{}};
  }
  vector<vector<T>> res = getAllSubset3(nums,dep+1);
  int n = res.size();
  for(int i=0; i<n; i++){
    auto v = res[i];
    v.push_back(nums[dep]);
    res.push_back(v);
  }
  return res;
  
}

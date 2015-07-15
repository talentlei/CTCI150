
template<class T>
vector<vector<T>> res;
vector<vector<T>> getAllSubset(vector<T>& nums){
  vector<T> one;
  getSubset(nums,one,0);
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

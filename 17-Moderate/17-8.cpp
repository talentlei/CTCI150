
int partialSum(const vector<int>& nums){
    if(nums.size()==0)
      throw exception("no element");
    int tmp = 0,sum=nums[0];
    for(auto : n){
      tmp += n;
      sum = max(sum,tmp);
      tmp = max(tmp,0);
    }
    return sum;
    
}

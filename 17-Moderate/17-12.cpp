
// 2sum
//is there Duplication element?
//assump having Duplication

vector<pair<int,int>> 2Sum(vector<int>&nums, int target){
  vector<pair<int,int>> res;
  sort(nums.begin(),nums.end());
  int first = 0, end= nums.size()-1;
  while(first<end){
    if(first==target-end){
      res.push_back(make_pair(first,end));
      first++;
      end--; //what if having Duplication
    }
    else if(first > target-end)
      end--;
    else first++;
  }
  return res;
}

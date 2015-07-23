
bool cmp(int a, int b){
  return a<b;
}
class Median{
  
  Median(){ 
    make_heap(left.begin(),left.end());
    make_heap(right.begin(),right.end(),cmp);
  };
  void add(int num){
    if(left.empty()&&right.empty()){
      median = num;
      return;
    }
      if(num>=right[0]&&right.size()>left.size()){
        left.push_back(median);
        push_heap(left.begin(),left.end());
        right.push_back(num);
        push_heap(right.begin(),right.end());
        median = right[0];
        pop_heap(right.begin(),right.end());
      }
      else if(num<left[0]&&left.size()>right.size()){
        right.push_back(median);
        push_heap(right.begin(),right.end());
        left.push_back(num);
        push_heap(left.begin(),left.end());
        median = left[0];
        pop_heap(left.begin(),left.end());
      }
      else if(num<left[0]){
        left.push_back(num);
        push_heap(left.begin(),left.end());
      }
      else if(num>=right[0]){
        right.push_back(num);
        push_heap(right.begin(),right.end());
      }
  }
  int getMedian(){
    return median;
  }
  
  
  private:
  vector<int> left;
  vector<int> right;
  int median;
}

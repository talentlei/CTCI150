
int findRotateIndex(const vector<int>& arr){
  
}
int findEWithOutDuplication(const vector<int>& arr,int target){
  int end = arr.size()-1;
  int beg = 0,tail = end;
  if(target == arr[tail]) return tail;
  while(beg<=end){
    int mid = beg+(end-beg)/2;
    if(arr[mid]==target) return mid;
    if(target<arr[tail]){
      //right half
      if(arr[mid]>=arr[tail]||arr[mid]<target)
        beg = mid+1;
      else end = mid-1;
    }
    else{
      if(arr[mid]<=arr[tail]||arr[mid]>target)
        end = mid-1;
      else beg = mid+1;
      
    }
  }
  return -1;
}

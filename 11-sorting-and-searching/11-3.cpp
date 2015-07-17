int findElement(const vector<int>& arr,int target){
  while(beg<=end){
    int mid = beg+(end-beg)/2;
    if(arr[mid]==target) return mid;
    if(arr[beg]<arr[mid]){
      //left half is sorted
      if(arr[beg]<=target&&target<arr[mid])
        end = mid-1;
      else end = mid+1;
    }
    else if(arr[beg]>arr[mid]){
      //right half sorted
      if(arr[mid]>target && target>arr[end])
        beg = mid+1;
      else end = mid-1;
      
    }else beg++;
  }
  return -1;
}

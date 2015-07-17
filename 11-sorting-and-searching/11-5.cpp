int findstr(const vector<string>& strs , string s){
  int beg = 0;
  int end = strs.size()-1;
  while(beg<=end){
    int mid = beg+(end-beg)/2;
    if(strs[mid]==s) return mid;
    else if(strs[mid]==""){
      if(strs[beg]==s)
        return beg;
      beg++;
    }else{
      if(strs[mid]>s)
        end--;
      else beg++;
    }
  }
  return -1;
}

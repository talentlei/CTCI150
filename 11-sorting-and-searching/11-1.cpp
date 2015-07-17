
void mergeSortedArray(vector<int>& B, vector<int>& A,int n){
  int m = B.size();
  int pa = n-1, pb = m-1, aft=m+n-1;
  while(pa>=0&&pb>=0){
    if(A[pa]>B[pb])
      A[aft--] = A[pa--];
    else  A[aft--] = B[pb--];
  }
  if(pa<0)
    while(pb>=0)
      A[aft--] = B[pb--];
  return;
}

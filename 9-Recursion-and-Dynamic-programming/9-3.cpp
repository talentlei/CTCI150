int findMagicIndex(vector<int>& A){
    int beg = 0, end=A.size()-1;
    while(beg<=end){
        int mid = beg+(end-beg)/2;
        if(A[mid]==mid) return mid;
        else if(A[mid]>mid) 
            end = mid-1;
        else beg = mid+1;
    }
    return -1;
}

//follow up
//not distinct

int _findMagicIndex2(const vector<int>& A, int beg, int end){
    if(beg>end)  return -1;
    int mid = beg+(end-beg)/2;
    if(A[mid]==mid)
        return mid;
    int ld = _findMagicIndex2(A,min(mid-1,A[mid]));
    if(ld!=-1)
        return ld;
    return _findMagicIndex2(A,max(mid+1,A[mid]));
}

int findMagicIndex2(const vector<int> & A){
    return _findMagicIndex2(A,0,A.size()-1);
}

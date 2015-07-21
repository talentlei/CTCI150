
//find the first position , which max(A[0:pos])!=pos;
//o(n) time o(n)space
pair<int,int> sortPart(const vector<int> & A){
  if(A.size()<2) return make_pair(-1,-1);
  int n = A.size();
  
  vector<int> Max(n,A[0]);
  vector<int> Min(n,A[A.size()-1]);
  //get Max
  for(int i=1; i<n; i++)
    Max[i] = max(A[i],Max[i-1]);
  for(int i=n-2; i>=0; i--)
    Min[i] = min(A[i],Min[i+1]);
  int beg = -1, end = -1;
  for(int i=0; i<n; i++ )
    if(Max[i]!=Min[i]){
      beg = i;
      break;
    }
  }
  for(int i=n-1; i>=0; i-- )
    if(Max[i]!=Min[i]){
      end = i;
      break;
    }
  }
  if(beg==-1||end==-1) return make_pair(-1,-1);
  return make_pair(beg,end);

}

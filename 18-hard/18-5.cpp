//find distance

int _distance1(string w1, string w2,string file){
  if(w1==w2) return 0;
  ifstream is(file.c_str(),ios::in);
  string word;
  int Min = number_limits<int>::max();
  int p_w1=-1, p_w2=-1;
  int pos;
  while(getsword(is,line)){
    if(word!=w1&&word!=w2){
      pos++;
      continue;
    }
    if(word==w1)
      p_w1 = pos;
    else if(word==w2)
      p_w2 = pos;
    pos++;
    if(p_w1!=-1&&p_w2!=-1)
      Min = min(Min,abs(p_w1-p_w2));
  }
  if(p_w1==-1||p_w2==-1)
    return -1;
  return Min;
}

//store all distance pair


//inverted index
void buildIndex(string file,unordered_map<string,vector<int>>& iidex){
  ifstream is(file.c_str(),ios::in);
  string line;
  int pos=0;
  for(getword(is,line)){
    if(iidx.find(line)!=iidx.end()）
      iidx[line].push_back(pos);
    else{
      vector<int> vec(1,pos);
      iidex[line] = vec;
    }
    pos++;
  }
}

int wordDistance(string w1, string w2, const unordered_map<string,vector<int>>& iidex){
  if(iidex.find(w1)==iidex.end()||iidex.find(w2)==iidex.end())
    return -1;
  if(w1==w2)
    return 0;
  vector<int > l1 = iidex[w1];
  vector<int > l2 = iidex[w2];
  return findMinDis(l1,l2);
}

int findMinDis(const vector<int> l1, const vector<int> l2){
  int minDis = number_limits<int>::max();
  int p1=0,p2=0;
  int len1 = l1.size(),len2 = l2.size();
  while(p1<len1&&p2<len2){
    if(l1[p1]==l2[p2])
      return 0;
    if(l1[p1]>l2[p2]){
      minDis = min(minDis,l2[p2]-l1[p1]);
      p2++;
    }
    else{
      minDis = min(minDis,l1[p1]-l2[p2]);
      p1++;
    }
  }
  return minDis;
}

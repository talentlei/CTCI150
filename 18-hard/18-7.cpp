
int max=0;
string maxword="";
map<string,bool> midres;

bool cmp(string s1, string s2){
  return s1.size()<s2.size();
}

bool compose(string str, vector<string>& dict){
  if(midres.count(str)!=0)
    return midres[str];
    int i=0;
    while(dict[i].size()<=str.size()){
      int size = dict[i].size();
      if(dict[i]==str||(dict[i]==str.substr(0,size)&&compos(str.substr(size,str.size()-size))){
        midres[str] = true;
        return true;
      }
    }
    midres[str] = false;
    return false;
}
string findMaxWordcompose(vector<string>& dict){
  sort(dict.begin(),dict.end(),cmp);
  for(string str: dict)
    midres[str] = true;
  for(int i=1; i<dict.size(); i++){
    for(int j=0; j<i; j++){
      int size = dict[j].size();
      if(dict[j]==dict[i].substr(0,size)&&dict[i].size()>size){
        if(compose(str,dict)){
          if(dict[i].size()>max){
            maxword = dict[i];
            max = dict[i].size();
          }
        }
      }
    }
  }
}


